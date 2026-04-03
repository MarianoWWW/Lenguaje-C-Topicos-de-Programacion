/*
La raíz cuadrada de un número positivo A puede calcularse mediante un proceso iterativo que genera
términos según la siguiente fórmula:

    R1 = 1

         1   (          (   A   ))
    R  = - * ( R     +  ( _____ ))
     i    2  (  i-1     ( R     ))
             (          (  i-1  ))

El proceso de cálculo se da por terminado cuando la diferencia entre dos términos sucesivos es
menor que una cota fijada de antemano.
Desarrollar una función para calcular la raíz cuadrada de X con una tolerancia TOL.
*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Validar (double *pt_a, double *pt_tol);
void Calcular (const double *pt_a, const double *pt_tol, double *pt_total);
void Mostrar (const double *pt_a, const double *pt_total);

#endif // FUNCIONES_H_INCLUDED
