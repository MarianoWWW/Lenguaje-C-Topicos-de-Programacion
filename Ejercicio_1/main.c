#include "funciones.h"

int main()
{
    long long int numero;

    do
    {
        printf("\n\n\nIngrese un numero natural, para calcular su factorial (incluido el 0) : ");
        scanf("%lld", &numero);
        if (numero < 0)
            printf("\n\nError, el numero natural no puede ser negativo. Intente nuevamente.");
    }while (numero < 0);

    Factorial(numero);

    printf("\n\n");
    system("pause");
    return 0;
}
