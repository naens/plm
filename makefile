.EXTENSIONS:
.EXTENSIONS: .obj .plm .exe

all: dos .symbolic

dos: readgen.exe .symbolic

object_files = sys.obj cons.obj string.obj tokread.obj readgen.obj
plm_lib = c:\intel\lib\doslibs.obj c:\intel\lib\plm86.lib

.plm.obj:
	plm86 $*.plm debug nolist

readgen.exe:  $(object_files)
	link86 $(object_files: =,), $(plm_lib: =,) to readgen.86 bind
	udi2dos readgen

clean: .symbolic
        rm readgen.86
        rm readgen.mp1
        rm readgen.exe
	rm *.obj
	rm *.lst
	rm *.exe
