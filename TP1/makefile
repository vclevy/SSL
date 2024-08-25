# Nombre del compilador
CC = gcc

# Opciones de compilación 
CFLAGS = -Wall -Wextra -std=c11 -pedantic

# Headers
HEADERS = tabla.h conversion.h

# Archivos objeto
OBJ = main.o tabla.o conversion.o

# Nombre del ejecutable
TARGET = main

# Compilación del programa
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compialción de main.o
main.o: main.c $(HEADERS)
	$(CC) $(CFLAGS) -c main.c

# Compilación de tabla.o
tabla.o: tabla.c tabla.h conversion.h
	$(CC) $(CFLAGS) -c tabla.c

# Compilación de conversion.o
conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) -c conversion.c

# Limpiar
clean:
	rm -f $(OBJ) $(TARGET)
