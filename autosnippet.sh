#! /bin/bash

template="snippet/auto_template.snippet"

for cppfile in "$@"
do	
	echo "$cppfile"
	if echo "$cppfile" | grep -q template
	then
		content=$(sed -e 's/[\&/]/\\&/g' -e 's/$/\\n/' $cppfile | tr -d '\n')
	else
		content=$(sed -e '/^#include/d' -e '/^using/d' -e '/^constexpr/d' \
			      -e 's/[\&/]/\\&/g' -e 's/$/\\n/' $cppfile | tr -d '\n')
	fi
	
	filename=${cppfile%.cpp}
	filename=${filename##*/}
	snippetname="snippet/$filename.snippet"	
	sed -e "s/:Name:/$filename/" -e "s/:Shortcut:/my${filename,,}/" \
	    -e "s/:Content:/$content/" $template > $snippetname
done
exit 0
