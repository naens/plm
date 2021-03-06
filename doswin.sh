#!/bin/sh

command="$@"
if [[ -z "$command" ]]; then
    SDL_AUDIODRIVER=dummy dosbox \
		-conf ~/.dosbox/dosbox-0.74.conf -conf dosbox.cnf \
		-c "mount c $(pwd)" \
		-c "c:" \
		-c "cls"
else
    tmpfile='tmp.$$$'
    SDL_AUDIODRIVER=dummy dosbox \
		-conf ~/.dosbox/dosbox-0.74.conf -conf dosbox.cnf \
		-c "mount c $(pwd)" \
		-c "c:" \
		-c "cls" \
		-c "$command" \
		-c "pause" \
		-c "exit"
fi

for f in $(find . \
	! -path './.git*' \
	! -path './troff/*' \
	! -path './docs/*' \
	! -path './disk/*' \
	! -name Makefile \
	! -name TODO )
do
    fn=$(echo "$f" | tr [:upper:] [:lower:])
    if [ ! "$f" = "$fn" -a ! "$f" = "Makefile" ]
    then
        mv "$f" "$fn"
    fi
done
