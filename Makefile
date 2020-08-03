run:
	lex tokens.l
	bison gram.y
	gcc gram.tab.c -ll
	./a.out < ex.cpp