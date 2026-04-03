#include "funciones.h"

void Validar (double *pt_a, double *pt_tol)
{

    printf("Vamos a calcular la raiz cuadrada. ");
    do
    {
        printf ("\n\nElige un numero para calcular su raiz cuadrada (tiene que ser positivo) : ");
        scanf ("%lf", pt_a);
        printf ("\nIngrese la tolerancia deseada : ");
        scanf ("%lf", pt_tol);
        if (*pt_a < 0 || *pt_tol <0)
            printf ("\n\nEn este ejercicio no se aceptan numeros negativos.");
    }while (*pt_a < 0 || *pt_tol <0);

}

void Calcular (const double *pt_a, const double *pt_tol, double *pt_total)
{

    double termino1 = 1, termino2, resta;
    double *pt_termino1 = &termino1, *pt_termino2 = &termino2, *pt_resta = &resta;

    do
    {

        *pt_termino2 = 0.5 * ((*pt_termino1)+(*pt_a / (*pt_termino1)));
        *pt_resta = (*pt_termino1) - (*pt_termino2);
        *pt_termino1 = *pt_termino2;

        if (*pt_resta < 0 )
            *pt_resta = -(*pt_resta);
    }while ((*pt_resta) >= *pt_tol);

    *pt_total = *pt_termino2;

}

void Mostrar (const double *pt_a, const double *pt_total)
{

    printf ("\n\nLa raiz cuadrada de %.2lf es aproximadamente : %.4lf", *pt_a, *pt_total);
    printf ("\n\n");
    system("pause");

}
