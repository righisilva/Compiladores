parser: lex.yy.o y.tab.o main.o node.o symbol_table.o lista.o
	gcc -o parser lex.yy.o y.tab.o main.o node.o symbol_table.o lista.o -ll

lex.yy.o: lex.yy.c y.tab.h
	gcc -c lex.yy.c

y.tab.o: y.tab.c y.tab.h
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

node.o: node.c
	gcc -c node.c

symbol_table.o: symbol_table.c
	gcc -c symbol_table.c

lista.o: lista.c
	gcc -c lista.c

lex.yy.c: analisador.l
	flex analisador.l

y.tab.c y.tab.h: nico2.y
	yacc -d nico2.y

clean:
	rm -f parser lex.yy.o y.tab.o main.o node.o symbol_table.o lista.o lex.yy.c y.tab.c y.tab.h

