CC = gcc
CFLAGS = -o
HPATH = src
NAME = ace

compile: $(NAME).c
	$(CC) $(CFLAGS) $(NAME) $(NAME).c $(HPATH)/game.c $(HPATH)/board.c $(HPATH)/piece.c 

run: $(NAME)
	./$(NAME)

clear:
	rm $(NAME)
