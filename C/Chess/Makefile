CC = gcc
CFLAGS = -o
HPATH = src
NAME = ace

compile: $(NAME).c
	$(CC) $(CFLAGS) $(NAME) $(NAME).c $(HPATH)/media.c $(HPATH)/board.c

run: $(NAME)
	./$(NAME)

clear:
	rm $(NAME)
