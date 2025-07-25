CC = gcc
RM = rm -rf

all: memdebug

memdebug: test.c
	$(CC) -o memdebug test.c

clean:
	$(RM) memdebug