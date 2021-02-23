CC = gcc
CFLAGS = -o

SPATH = src
NAME = alsa
comp: $(NAME).c
	$(CC) $(CFLAGS) $(NAME) $(NAME).c $(SPATH)/table.c $(SPATH)/game.c $(SPATH)/piece.c  $(SPATH)/analyze.c $(SPATH)/move.c

run: $(NAME)
	./$(NAME)

clear:
	rm $(NAME)
