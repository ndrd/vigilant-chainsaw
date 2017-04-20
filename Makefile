all:
	lex full.l
	yacc -dg full.y
	clang -v lex.yy.c y.tab.c -ll -lm

clean:
	rm -rf scanner.cpp
	rm -rf parser.cpp parser.hpp location.hh position.hh stack.hh
	rm -rf a.out