#! /bin/bash -eu

temp_dir=${TEMP_DIR:-'/home/rajyan/kyopro/library/templates'}
template=${TEMP_FILE:-'/home/rajyan/kyopro/library/templates/auto_template.xml'}
config_dir=${CONFIG_DIR:-'/mnt/c/Users/kitak/AppData/Roaming/JetBrains/CLion2020.3/jba_config/templates'}
config_file=${CONFIG_DIR:-'C_C__.xml'}

for cppfile in "$@"; do
  if [[ $cppfile = "*template.cpp" ]]; then
    # delete empty lines until content, replace end of line with EOF, drop \r or \n
    content=$(sed -e '/[^\r\n]/,$!d; s/$/EOL/' "$cppfile" | tr -d '\r\n')
  else
    # delete line starting with (#include | using (namespace|lint) | constexpr)
    content=$(sed -e '/^#include/d; /^using\ [nl]/d; /^constexpr/d' -e '/[^\r\n]/,$!d; s/$/EOL/' "$cppfile" | tr -d '\r\n')
  fi
  # escape xml special characters
  content=$(echo "$content" | sed 's/&/\&amp;/g; s/</\&lt;/g; s/>/\&gt;/g; s/"/\&quot;/g; s/EOL/\&#10;/g;')

  filename=${cppfile%.cpp}
  filename=${filename##*/}
  shortname=${filename/_/}
  shortname=${shortname,,}

  NAME="my${shortname}" VALUE=${content} envsubst < "$template" >"$temp_dir/$filename.xml"
done

templates='<templateSet group="C/C++">'
for xml in "$temp_dir"/*; do
  [[ -e $xml ]] || break
  [[ $xml =~ $config_file || $xml = "$template" ]] && continue
  templates+=$(cat "$xml")
done
templates+='</templateSet>'
echo $templates > "$temp_dir"/"$config_file"
cp -v "$temp_dir"/"$config_file" "$config_dir"/"$config_file"
