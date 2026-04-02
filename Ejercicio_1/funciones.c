#include "funciones.h"

void Factorial(long long int numero)

{
    long long int acumulador;
    printf("\n\n\n %lld! = ", numero);

    acumulador = 1;

    if (numero == 0)
        printf("1");
    else
    {
        for (int i = numero ; i >0 ; i-- )
        {
            if (i != 1)
                printf("%d*", i);
            else
                printf("1 = ");
            acumulador = acumulador * i;
        }
    printf("%lld", acumulador);
    }

}
