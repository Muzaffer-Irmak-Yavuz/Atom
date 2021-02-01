CC = gcc
CFLAGS = -o
HPATH = src
NAME = ace

compile: $(NAME).c
	$(CC) $(CFLAGS) $(NAME) $(NAME).c $(HPATH)/media.c

run: $(NAME)
	./$(NAME)

clear:
	rm $(NAME)
