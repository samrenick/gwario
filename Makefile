deploy:
	zig cc -o main.exe main.c -target aarch64-macos 
	./main.exe

