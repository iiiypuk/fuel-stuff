ifeq ($(OS),Windows_NT)
	RM = $(RM)
	CC = cl
	TARGET = build-creator.exe
else
ifeq ($(shell uname), Linux)
	RM = rm -f
	CC = gcc -O2
	TARGET = build-creator
endif
endif

all: zip.dll build_creator.c
ifeq ($(shell uname), Linux)
	./$(TARGET)
else
	$(TARGET)
endif

zip.dll:
ifeq ($(OS),Windows_NT)
	$(CC) /LD ../zip/src/zip.c /zip.dll
else
ifeq ($(shell uname), Linux)
	$(CC) -c ../zip/src/zip.c -o zip.dll
endif
endif

build_creator.c:
ifeq ($(OS),Windows_NT)
	$(CC) build-creator.c zip.obj
else
ifeq ($(shell uname), Linux)
	$(CC) build-creator.c zip.dll -o $(TARGET)
endif
endif

clean:
	$(RM) *.obj
	$(RM) $(TARGET)
	$(RM) zip.dll
	$(RM) *.zip
