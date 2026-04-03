#include "funciones.h"

void Validar (long long int *pt_natural)
{
    printf ("\n\nHora de calcular los primeros N numeros naturales pares.");

    do
    {
        printf ("\n\nIngrese un numero natural (cero incluido) : ");
        scanf ("%lld", pt_natural);
        if (*pt_natural < 0)
            printf ("\nError en el numero elegido. No puede ser negativo. Intente nuevamente.");
    }while (*pt_natural < 0);
}

void Calcular (const long long int *pt_natural, long long int *pt_suma)
{
    long long int i;

    for (i = 1 ; i < *pt_natural ; i++)
    {
        *pt_suma = (*pt_suma) + (i*2);
    }
}

void Mostrar (const long long int *pt_natural, const long long int *pt_suma)
{
    printf ("\n\nLa suma de los primeros %lld numeros pares es : %lld", *pt_natural, *pt_suma);
    printf ("\n\n");
    system ("pause");
}
