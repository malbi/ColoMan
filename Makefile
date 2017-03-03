CFLAGS = -Wall
CC = gcc
OBJ = main.o menu.o account_management.o

ColoMan : $(OBJ)
	$(CC) $^ -o ColoMan


%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)
