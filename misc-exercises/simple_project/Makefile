# Simple makefile to illustrate how to use it in building programs in C
CC = gcc
CFLAGS = -g -I/Users/imad/Documents/c_programming/simple_project

PROG = program
HDRS = headers.h
SRCS = main.c min.c max.c
OBJS = $(SRCS:.c=.o)

$(PROG) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROG)

main.o : main.c min.c max.c headers.h
min.o : min.c
max.o : max.c

TAGS : $(SRCS) $(HDRS)
	etags $(SRCS) $(HDRS)

.PHONY : variables
variables : 
	@echo $(OBJS)

.PHONY : clean
clean :
	rm -f core $(OBJS) $(PROG) TAGS