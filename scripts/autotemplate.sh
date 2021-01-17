#! /bin/bash -eu

tmp_file=${TMP_FILE:-'/tmp/temp.cpp'}
templates=${TEMPLATES:-'../library/templates'}
base_file=${BASE_FILE:-'../library/templates/auto_template.xml'}
config_dir=${CONFIG_DIR:-'../../AppData/Roaming/JetBrains/CLion2020.3/jba_config/templates'}
config_file=${CONFIG_DIR:-'C_C__.xml'}

function format() {
  # compress multiple empty lines, delete empty lines until content, replace end of line with EOL, drop \r or \n
  cat -s "$1" | sed '/[^\r\n]/,$!d; s/$/EOL/' | tr -d '\r\n' | \
  # escape xml special characters
  sed 's/&/\&amp;/g; s/</\&lt;/g; s/>/\&gt;/g; s/"/\&quot;/g; s/EOL/\&#10;/g;'
  rm "$1"
}

for cppfile in "$@"; do
  # run only on cpp files
  if [[ ! $cppfile == *'.cpp' ]]; then
    continue
  fi
  # expand and trim
  if [[ $cppfile == *'template.cpp' ]]; then
    cat "$cppfile" > "$tmp_file"
    echo "$cppfile"
  else
    # expand includes
    oj-bundle "$cppfile" | \
    # delete line starting with (#include | using (namespace|lint) | constexpr)
    sed '/^#line/d; /^#include/d; /^using\ [nl]/d; /^constexpr/d' > "$tmp_file"
  fi
  content=$(format "$tmp_file")

  filename=${cppfile%.cpp}
  filename=${filename##*/}
  shortname=${filename/_/}
  shortname=${shortname,,}

  NAME="my${shortname}" VALUE=${content} envsubst < "$base_file" > "$templates/$filename.xml"
done

# generate templateSet
templateSet='<templateSet group="C/C++">'
for xml in "$templates"/*; do
  [[ -e $xml ]] || break
  if [[ $xml == *"$config_file" || $xml == *"${base_file##*/}" ]]; then
    echo "$xml"
    continue
  fi
  templateSet+=$(cat "$xml")
done
templateSet+='</templateSet>'
echo "$templateSet" > "$templates"/"$config_file"
cp -v "$templates"/"$config_file" "$config_dir"/"$config_file"
