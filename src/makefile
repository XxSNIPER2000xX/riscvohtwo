# compiler flags
CC = gcc
CFLAGS = -g

# files
SRCS = main.c
HEADERS = globals.h
OBJS = $(SRCS:.c=.o)

# executable
TARGET = a

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJS): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -rf *.o
