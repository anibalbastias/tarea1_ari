#
# Makefile - Constructor de Archivos para Compilar en gcc
#

CC = gcc
CFLAGS = -g -O2 -Wall
OBJECTS = main.o

tarea1 : 	$(OBJECTS)
			$(CC) $(CFLAGS) $(OBJECTS) -o tarea1

main.o : 	main.c head.h head_circ_list.h head_system.h head_disco_blando.h
			$(CC) $(CFLAGS) -c main.c

clean:
			rm *.o
			rm tarea1
