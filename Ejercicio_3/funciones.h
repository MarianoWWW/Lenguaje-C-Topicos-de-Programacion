/*

Ejercicio 3
Dado un número entero X y una tolerancia (TOL), puede obtenerse ex mediante la suma de los
términos de la serie:

                     ( x **1 )
e **x = 1 + .........  -----   + ...........
                     (   1   )

El proceso termina cuando se obtiene un término calculado que sea menor que la tolerancia TOL.
Desarrollar una función para calcular el ex , dados X y TOL.

*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

double Factorial(double i);
double Calcular_e(int x, double tol);

#endif // FUNCIONES_H_INCLUDED
