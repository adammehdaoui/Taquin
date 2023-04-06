CC=gcc
CFLAGS=-Wall
LDLIBS=-lMLV -lm

SRCDIR=src
OBJDIR=obj

EXEC=taquin

$(OBJDIR)/taquin.o: $(SRCDIR)/taquin.c
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJDIR)/taquin.o
	$(CC) $^ -o $@ $(LDLIBS)
	./taquin

clean : 
	rm taquin
	rm obj/*.o