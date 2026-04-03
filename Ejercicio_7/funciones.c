#include "funciones.h"

void Validar (long long int *pt_natural)
{
    do
    {
        printf("\n\nIngrese un numero natural (el cero no se admite) : ");
        scanf("%lld", pt_natural);
        if (*pt_natural <= 0 )
            printf("\n\nError en el natural elegido, intente nuevamente. ");
    }while (*pt_natural <= 0 );

}

void Logica_y_mostrar (const long long int *pt_natural)
{

    long long int i, suma = 0;
    long long int *pt_suma = &suma;


    for (i = 1 ; i < *pt_natural ; i++)
    {
        if ( ((*pt_natural) % i) == 0)
            *pt_suma = *pt_suma + i;
    }
    if (*pt_natural == *pt_suma)
        printf ("\n\n El numero %lld es PERFECTO.", *pt_natural);
    else{
        if (*pt_natural > *pt_suma)
            printf ("\n\n El numero %lld es DEFICIENTE.", *pt_natural);
        else
            printf ("\n\n El numero %lld es ABUNDANTE.", *pt_natural);
    }
    printf ("\n\n");
    system ("pause");
}
