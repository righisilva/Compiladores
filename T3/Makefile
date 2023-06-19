all: parser

y.tab.c: nico.y
	yacc -d nico.y

y.tab.h: nico.y
	yacc -d nico.y

lex.yy.c: analisador.l y.tab.h
	flex analisador.l

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

node.o: node.c
	gcc -c node.c

parser: lex.yy.o y.tab.o main.o node.o
	gcc -o parser lex.yy.o y.tab.o main.o node.o -ll

clean:
	rm -f lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o main.o node.o parser

