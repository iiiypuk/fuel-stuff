CC=cl

all: zip.dll build_creator.c
	build-creator.exe

zip.dll:
	$(CC) /LD ../zip/src/zip.c /zip.dll

build_creator.c:
	$(CC) build-creator.c zip.obj

clean:
	del *.obj
	del *.exe
	del zip.dll
	del *.zip
