CC = gcc
CFLAGS += -Wall
CFLAGS += -o


SPATH = src
TPATH = test
TSPATH = test/test_source


test: test/test_prime_num.c test/test_source/test_assert.c
	$(CC) $(CFLAGS) test_prime_num $(TPATH)/test_prime_num.c $(TSPATH)/test_assert.c $(SPATH)/prime_num.c
	./test_prime_num

clear:
	rm test_prime_num
