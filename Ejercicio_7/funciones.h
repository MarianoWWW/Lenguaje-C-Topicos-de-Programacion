/*

Un número natural es perfecto, deficiente o abundante según que la suma de sus divisores positivos
menores que él sea igual, menor o mayor que él. Por ejemplo:
Número Divisores positivos menores que él Suma de los divisores Clasificación
6      1, 2, 3                            6                     PERFECTO
10     1, 2, 5                            8                     DEFICIENTE
12     1, 2, 3, 4, 6                      16                    ABUNDANTE
Desarrollar una función que determine si un número natural es perfecto, deficiente o abundante.


*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Validar (long long int *pt_natural);
void Logica_y_mostrar (const long long int *pt_natural);

#endif // FUNCIONES_H_INCLUDED
