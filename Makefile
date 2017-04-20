all:
	flex full.l
<<<<<<< HEAD
	bison -dg full.y
	gcc lex.yy.c full.tab.c -ll -lm -o test
=======
	bison -dgv full.y
	gcc lex.yy.c full.tab.c -lfl -lm -o test
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
	./test < h.c
clean:
	rm -rf scanner.cpp
	rm -rf parser.cpp parser.hpp location.hh position.hh stack.hh
	rm -rf a.out
