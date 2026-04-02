#include "funciones.h"

int main()
{
    long long int m,n;

    printf("\n\nVamos a  calcular el combinatorio m sobre n.");
    printf("\n\n\n\t(m)       m!");
    printf("\n\t( ) = ------------");
    printf("\n\t(n)    n!(m - n)!\n\n");

    do
    {
        printf("\n\nIngrese el numero n, tiene que ser igual o mayor a cero (n es el de abajo) : ");
        scanf("%lld", &n);
        if (n <0)
            printf("\n\nError, n debe ser igual o mayor a 0. Intente nuevamente.");
    }while (n <0);

    do
    {
        printf("\n\nIngrese el numero m, tiene que ser igual o mayor a %lld (m es el de arriba) : ", n);
        scanf("%lld", &m);
        if (m < n)
            printf("\n\nError, m debe ser igual o mayor a %lld. Intente nuevamente.", n);
    }while (m < n);

    Combi(m, n);

    printf("\n\n");
    system("pause");
    return 0;
}
