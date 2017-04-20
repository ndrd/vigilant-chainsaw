all:
	flex full.l
	yacc -dg full.y
	gcc lex.yy.c y.tab.c -lfl -lm -o test

clean:
	rm -rf scanner.cpp
	rm -rf parser.cpp parser.hpp location.hh position.hh stack.hh
	rm -rf a.out
