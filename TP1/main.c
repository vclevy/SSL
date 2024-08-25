#include <stdio.h>
#include <stdlib.h>
#include "tabla.h"

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 4)
    {
        printf("Uso: %s inicio fin [incremento]\n", argv[0]);
        return 1;
    }

    double inicio = atof(argv[1]);
    double fin = atof(argv[2]);
    double incremento = (argc == 4) ? atof(argv[3]) : 1.0;

    if (inicio > fin)
    {
        printf("El valor inicial debe ser menor o igual al final.\n");
        return 1;
    }

    generarTabla(inicio, fin, incremento);

    return 0;
}
