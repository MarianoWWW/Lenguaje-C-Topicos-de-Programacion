#include "funciones.h"

void Calcular (double *pt_total)
{
    int flag = 0;
    double cont = 3;
    double seno, tol, cubo, factorial, termino;
    double *pt_seno = &seno, *pt_tol = &tol, *pt_cubo = &cubo, *pt_factorial = &factorial, *pt_termino = &termino, *pt_cont = &cont;

    printf ("\n\nVamos a calcular sen(x) utilizando una funcion.");
    printf ("\nIngresar el numero x : ");
    scanf ("%lf", pt_seno);
    printf ("\nIngresar la tolerancia admitida : ");
    scanf ("%lf", pt_tol);
    if (*pt_tol < 0 )
        *pt_tol = -(*pt_tol);

    *pt_total = *pt_seno;
    do
    {
        *pt_cubo = pow(*pt_seno, cont);
        Factorial(pt_cont, pt_factorial);
        *pt_termino = (*pt_cubo) / (*pt_factorial);
        if (flag == 0)
        {
            *pt_total = (*pt_total) - (*pt_termino);
            flag = 1;
        }
        else
        {
            *pt_total = (*pt_total) + (*pt_termino);
            flag = 0;
        }

         if (*pt_termino < 0 )
        *pt_termino = -(*pt_termino);

        cont = cont + 2;

    }while (*pt_termino > *pt_tol);
}

void Factorial (double *pt, double *pt_factorial)
{
    int n = (int)(*pt);
    double aux = 1;

    for (int i = 1; i <= n; i++)
        aux *= i;

    *pt_factorial = aux;
}

void Mostrar (double *pt_total)
{
    printf ("\n\nEl seno en radianes es aproximadamente : %lf", *pt_total);
    printf("\n\n");
    system("pause");
}
