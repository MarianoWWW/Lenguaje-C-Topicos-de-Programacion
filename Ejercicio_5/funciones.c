#include "funciones.h"

void Validar (long long int *pt_num)
{
    printf ("\n\nIngrese un numero entero y positivo, para chequear si pertence a la serie Fibonacci : ");
    do
    {
        scanf ("%lld", pt_num);
        if (*pt_num <= 0)
            printf ("\nError, no puede ser cero o negativo, intente nuevamente : ");
    }while (*pt_num <= 0);

    if (*pt_num == 1){
        printf ("\nEl numero 1 siempre va a pertenecer a la serie Fibonacci, no hay nada que calcular.");
        printf("\n\n");
        system("pause");
        exit(0);
    }
}

void Calcular_y_mostrar (const long long int *pt_num)
{
    long long int termino1 = 1, termino2 = 1, total;
    long long int *pt_termino1 = &termino1, *pt_termino2 = &termino2, *pt_total = &total;

    printf ("\n\n Serie : 1 1 ");

    do
    {
        *pt_total = (*pt_termino1) + (*pt_termino2);
        *pt_termino1 = *pt_termino2;
        *pt_termino2 = *pt_total;
        printf ("%lld ", *pt_total);

    }while (*pt_num > *pt_total);

    if (*pt_num == *pt_total)
        printf ("\n\nEl numero %lld si pertenece a la serie Fibonacci.", *pt_num);
    else
        printf ("\n\nEl numero %lld no pertenece a la serie Fibonacci.", *pt_num);
}
