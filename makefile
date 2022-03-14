all: dos .symbolic

dos: readgen.exe .symbolic

readgen.exe: $src
	udi2dos readgen

clean: .symbolic
	del *.obj
	del *.exe
