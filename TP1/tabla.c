#include "tabla.h"
#include "conversion.h"
#include <stdio.h>
#include <assert.h>

void generarTabla(double inicio, double fin, double incremento)
{
    assert(inicio >= 0 && fin > inicio);
    assert(incremento > 0);

    double kilometros;
    
    printf("|\t    Nudos|\t    Km/h|\n");
    printf("|----------------|--------------|");
    
    double nudo = inicio;
    
    while (nudo <= fin)
    {
        kilometros = convertirNudosAKmh(nudo);
        printf("\n|\t %8.2f|\t%8.4f|", nudo, kilometros);
        nudo += incremento;
    }
    printf("\n"); 
}