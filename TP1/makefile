# Nombre del compilador
CC = gcc

# Opciones de compilación (estricto adherencia al estándar)
CFLAGS = -Wall -Wextra -std=c11 -pedantic

# Archivos de cabecera
HEADERS = tabla.h conversion.h

# Archivos objeto
OBJ = main.o tabla.o conversion.o

# Nombre del ejecutable
TARGET = main

# Regla para compilar el programa
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Regla para compilar main.o
main.o: main.c $(HEADERS)
	$(CC) $(CFLAGS) -c main.c

# Regla para compilar tabla.o
tabla.o: tabla.c tabla.h conversion.h
	$(CC) $(CFLAGS) -c tabla.c

# Regla para compilar conversion.o
conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) -c conversion.c

# Regla para limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJ) $(TARGET)
