#include "funciones.h"

void Validar (long long int *pt_natural, long long int *pt_natural_1)
{
    long long int i;
    long long int *pt_i = &i;
    printf("\n\nVamos a multiplicar, haciendo sumas sucesivas.");

    do
    {
        printf("\nIngrese el primer numero natural : ");
        scanf ("%lld", pt_natural);
        Verifica (pt_natural, pt_i);
    }while (!(*pt_i));
     do
    {
        printf("\nIngrese el segundo numero natural : ");
        scanf ("%lld", pt_natural_1);
        Verifica (pt_natural_1, pt_i);
    }while (!(*pt_i));

}
void Verifica (const long long int *pt_natural, long long int *pt_i)
{
    if (*pt_natural <0)
    {
        printf("\nNo puede ser un numero negativo, intente nuevamente .");
        *pt_i = 0;
    }
    else
        *pt_i = 1;
    return;
}

void Sumar (const long long int *pt_natural, const long long int *pt_natural_1, long long int *pt_suma)
{
    long long int i;

    for ( i = 0 ; i < *pt_natural_1 ; i++)
    {
        *pt_suma = (*pt_suma) + (*pt_natural);
    }

}
void Mostrar (const long long int *pt_natural, const long long int *pt_natural_1, const long long int *pt_suma)
{

    printf("\nLas sumas sucesivas de %lld , hechas %lld veces , dan como resultado la multiplicacion %lld X %lld = %lld",
           *pt_natural, *pt_natural_1, *pt_natural, *pt_natural_1, *pt_suma);

    printf ("\n\n");
    system ("pause");
}
