CC=gcc
CFLAGS= -Wall -Wextra -pedantic -std=c99 -Werror
LDFLAGS= `sdl-config --libs` -lSDL_image
EXEC=snake

all: $(EXEC)

snake: main.o move.o menu.o temps.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)