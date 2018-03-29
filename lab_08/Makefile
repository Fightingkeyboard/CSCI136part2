main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm funcs.o main.o