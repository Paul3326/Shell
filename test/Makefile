CC =gcc

CFLAGS =-Wall -g -ldl -lpthread -lm
INC_FLAGS =-I ./inc/
LIB_FLAGS =

CFLAGS +=$(INC_FLAGS) $(LIB_CFLAGS)
#SRCS =$(wildcard src/*.c)
SRCS = ./src/fun.c \
       ./src/main.c \
       ./src/func.c
	
TARGET =app

all:
	$(CC) $(SRCS) $(CFLAGS) -o $(TARGET)

clean:
	rm -rf *.o
	rm -rf $(TARGET)
