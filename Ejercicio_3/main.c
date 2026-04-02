#include "funciones.h"

int main()
{
    double tol, sumatoria;
    int x;

    printf("\n\n\nEl numero e.\nDado un numero entero X y una tolerancia (TOL),");
    printf("puede obtenerse e elevado a la x\n(mediante la suma de los terminos de una serie.");
    printf("\n\nComprobemoslo.");

    printf("\n\nIngrese cualquier numero x para calcular e elevado a la x :");
    scanf("%d", &x);
    do
    {
        printf("\n\nIngrese la Tolerancia que desea comprobar (Debe ser igual o mayor a cero) : ");
        scanf("%lf", &tol);
        if (tol <0)
            printf("\n\nError en la tolerancia ingresada. Intente nuevamente.");

    }while (tol <0);

    sumatoria = Calcular_e(x, tol);

    printf("\n\ne elevado a la %d es aproximadamente %.6f", x, sumatoria);


    printf("\n\n");
    system("pause");

    return 0;
}
