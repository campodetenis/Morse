main:morse.o main.c
	gcc -g morse.o main.c -o morse

morse.o: morse.c morse.h
	gcc -c -g morse.c