#include "funciones.h"

void Validar (long long int *pt_natural)
{
    printf ("\n\nVamos a determinar si un numero N natural es primo.");

    do
    {
        printf ("\n\nIngrese un numero natural : ");
        scanf ("%lld", pt_natural);
        if (*pt_natural < 0)
            printf ("\nError en el numero elegido. No puede ser negativo. Intente nuevamente.");
    }while (*pt_natural < 0);
}

void Calcular (const long long int *pt_natural, long long int *pt_resultado)
{
    long long int suma = 0, i = 2;

    if (*pt_natural == 0 || *pt_natural == 1)
    {
        printf ("\n\nEl cero y el uno no cumplen con los requisitos de calculo de numero primo.");
        *pt_resultado = 0;
    }
    else
        {
            while (suma <= 1 && i <= (*pt_natural))
            {
                if ((*pt_natural) % i == 0)
                    suma ++;
                i++;
            }
            if (suma == 1 )
                *pt_resultado = 1;
            else
                *pt_resultado = 0;
        }

}

void Mostrar (const long long int *pt_natural, const long long int *pt_resultado)
{
    if (*pt_resultado)
        printf("\n\nEl numero %lld es PRIMO.", *pt_natural);
    else
        printf("\n\nEl numero %lld NO ES PRIMO.", *pt_natural);

    printf ("\n\n");
    system ("pause");
}
