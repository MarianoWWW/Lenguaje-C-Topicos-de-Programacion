/*

Ejercicio 1
El factorial de un número natural incluido el 0, se calcula de la siguiente manera:
1 si N = 0
N! =
N. (N - 1)! si N > 0
o sea, N! = N. (N - 1). (N - 2). …. 3. 2. 1
Ejemplo: 5! = 5. 4. 3. 2. 1 = 120
Desarrollar una función para calcular el factorial de un entero.

*/


#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Factorial(long long int numero);

#endif // FUNCIONES_H_INCLUDED
