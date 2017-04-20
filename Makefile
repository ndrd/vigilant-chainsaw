all:
	lex -o scanner.cpp scanner.l
	yacc -o parser.cpp parser.y
	cc lex.yy.c y.tab.c -o nono

clean:
	rm -rf scanner.cpp
	rm -rf parser.cpp parser.hpp location.hh position.hh stack.hh
	rm -rf a.out