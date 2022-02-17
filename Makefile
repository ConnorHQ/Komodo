all:
	clang++ -o build/main.exe $(wildcard src/*.cpp) -Iinclude