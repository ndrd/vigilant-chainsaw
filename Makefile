all:
	flex full.l
	bison -dgv full.y
	gcc lex.yy.c full.tab.c -lfl -lm -o test
	./test < h.c
clean:
	rm -rf scanner.cpp
	rm -rf parser.cpp parser.hpp location.hh position.hh stack.hh
	rm -rf a.out
