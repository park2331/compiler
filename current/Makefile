CC=gcc
CFLAGS=-c -g

120++: 120++.o token.o tlist.o tree.o 120gram.tab.o lex.yy.o 
	$(CC) -o 120 120++.o lex.yy.o token.o tlist.o 120gram.tab.o tree.o 

token.o: token.c
	$(CC) $(CFLAGS) token.c

tlist.o: tlist.c
	$(CC) $(CFLAGS) tlist.c

tree.o: tree.c
	$(CC) $(CFLAGS) tree.c

lex.yy.o: lex.yy.c
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c: 120lex.l 120gram.tab.c
	flex 120lex.l

120gram.tab.o: 120gram.tab.c
	$(CC) $(CFLAGS) 120gram.tab.c

120gram.tab.c: 120gram.y
	bison -dtv 120gram.y

clean:
	rm lex.yy.c
	rm 120gram.tab.c
	rm 120gram.output
	rm 120
	rm *.o
