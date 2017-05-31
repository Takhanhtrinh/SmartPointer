all: main
main: src/main.cpp
	g++ src/main.cpp -o main
clean:
	rm main
