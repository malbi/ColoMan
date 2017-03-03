CFLAGS = -Wall
CC = gcc

ColoMan : main.o menu.o
	$(CC) $^ -o ColoMan


%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)
