/*
Dados X y una tolerancia TOL es posible calcular el seno (x) mediante la suma de los términos de la
serie:

                      3     5     7
                     X     X     X
       sen(x) = X -  -  -  -  -  -  - ..........
                     3!    5!    7!

Este proceso continúa mientras el término calculado (en valor absoluto) sea mayor que la tolerancia.
Desarrollar una función que obtenga el seno de X con tolerancia TOL, utilizando dicha serie.
*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Calcular (double *pt_total);
void Factorial (double *pt, double *pt_factorial);
void Mostrar (double *pt_total);

#endif // FUNCIONES_H_INCLUDED
