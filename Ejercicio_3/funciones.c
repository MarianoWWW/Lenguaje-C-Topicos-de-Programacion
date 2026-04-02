#include "funciones.h"


double Calcular_e(int x, double tol)

{
    double termino, sumatoria = 1, elevado = 1, divisor;
    int i = 1;

    do
    {

        elevado = x * elevado ;

        divisor = Factorial(i);

        termino = elevado/divisor;

        sumatoria = sumatoria + termino;

        i++;

    }while (termino > tol || termino < -tol);
    return sumatoria;
}

double Factorial(double i)

{
    int j;
    double fac = 1;
    if (i == 0)
        return fac;
    else
    {
        for (j = i ; j > 0 ; j--)
        {
            fac = fac*j;
        }
    }
    return fac;
}
