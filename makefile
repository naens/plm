.ERASE
.EXTENSIONS:
.EXTENSIONS: .obj .plm .exe

all: dos .symbolic

dos: readgen.exe .symbolic

object_files = tokread.obj readgen.obj parser.obj
libs = c:\devel\intel\lib\doslibs.obj ..\plmlib\plmlib.obj

.plm.obj:
	plm86 $*.plm debug symbols

readgen.exe:  $(object_files)
	link86 $(object_files: =,), $(libs: =,) to readgen.86 bind
	udi2dos readgen

.IGNORE
clean: .symbolic
	rm readgen.86
	rm readgen.mp1
	rm readgen.exe
	rm *.obj
	rm *.lst
	rm *.bak
	rm *.bkp
	rm *.exe

