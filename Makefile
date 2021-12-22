deploy:
	zig cc -o main.exe main.cpp -target aarch64-macos 
	./main.exe

