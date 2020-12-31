#! /bin/bash

template="snippet/auto_template.snippet"

for cppfile in "$@"
do	
	if echo "$cppfile" | grep -q template; then
		content=$(sed  -e '/[^\r\n]/,$!d' -e 's/[\&/]/\\&/g' -e 's/$/\\n/' "$cppfile" | tr -d '\n')
	else
		content=$(sed -e '/^#include/d' -e '/^using\ [nl]/d' -e '/^constexpr/d' -e '/[^\r\n]/,$!d' \
			      -e 's/[\&/]/\\&/g' -e 's/$/\\n/' "$cppfile" | tr -d '\n')
	fi
	
	filename=${cppfile%.cpp}
	filename=${filename##*/}
    shortname=${filename/_/}
    shortname=${shortname,,}

	sed -e "s/:Name:/$filename/" -e "s/:Shortcut:/my$shortname/" \
	    -e "s/:Content:/$content/" $template > "snippets/$filename.snippet"
done
