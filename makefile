all: dos .symbolic

dos: readgen.exe .symbolic

sys.obj: sys.plm glob.inc
	plm86 sys.plm debug nolist

readgen.exe: sys.obj
	udi2dos readgen

clean: .symbolic
	del *.obj
	del *.exe
