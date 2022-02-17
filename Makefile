all:
	clang++ -o main.exe $(wildcard src/*.cpp) -Iinclude