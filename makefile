.EXTENSIONS:
.EXTENSIONS: .obj .plm .exe

all: dos .symbolic

dos: readgen.exe .symbolic

object_files = sys.obj cons.obj string.obj tokread.obj readgen.obj

.plm.obj:
	plm86 $*.plm debug nolist

readgen.exe:  $(object_files)
	udi2dos readgen

clean: .symbolic
	rm *.obj
	rm *.lst
	rm *.exe
