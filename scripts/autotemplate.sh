#! /bin/bash -eu

tmp_file=${TMP_FILE:-'temp.hpp'}
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

# skip if no changes
if [ $# -eq 0 ]; then
    exit 0
fi

# generate templates
for hppfile in "$@"; do
  # run only on hpp files
  if [[ ! $hppfile == *'.hpp' ]]; then
    continue
  fi
  # expand and trim
  if [[ $hppfile == *'template.hpp' ]]; then
    cat "$hppfile" > "$tmp_file"
    echo "$hppfile"
  else
    # expand includes
#    /home/rajyan/.pyenv/shims/oj-bundle "$hppfile" 2> /dev/null | \
    echo "$(sed -n -r "s/#include \"(.*)\"/${hppfile%/*}\/\1/p" "$hppfile")" "$hppfile" | xargs cat | \
    # delete line starting with (#line | #pragma | #include | using (namespace|lint) | constexpr)
    sed '/^#line/d; /^#pragma/d; /^#include/d; /^using\ [nl]/d; /^constexpr/d' > "$tmp_file"
  fi
  content=$(format "$tmp_file")

  filename=${hppfile%.hpp}
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
