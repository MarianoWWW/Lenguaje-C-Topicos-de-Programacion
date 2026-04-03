#include "funciones.h"

void Validar (long long int *pt_natural, long long int *pt_natural_1)
{
    printf("\n\nVamos a dividir.");

    do
    {
        printf("\nIngrese el primer numero natural, si puede ser cero : ");
        scanf ("%lld", pt_natural);
        if (*pt_natural < 0)
            printf("\nError, no puede ser un numero negativo, intente nuevamente. ");

    }while (*pt_natural < 0);
     do
    {
        printf("\nIngrese el segundo numero natural, no puede ser cero : ");
        scanf ("%lld", pt_natural_1);
        if (*pt_natural_1 <= 0)
            printf("\nError, no puede ser un numero negativo o cero, intente nuevamente. ");
    }while (*pt_natural_1 <= 0);
}
void Dividir_y_mostrar (const long long int *pt_natural, const long long int *pt_natural_1)
{
    long long int cociente, resto;
    long long int *pt_cociente = &cociente, *pt_resto = &resto;

    *pt_cociente = (*pt_natural) / (*pt_natural_1);
    *pt_resto = (*pt_natural) % (*pt_natural_1);

    printf("\nEl cociente entre %lld y %lld es = %lld    El resto es = %lld",
           *pt_natural, *pt_natural_1, *pt_cociente, *pt_resto);

    printf ("\n\n");
    system ("pause");

}
