/*

Ejercicio 8
Dados dos números naturales (incluido el cero), obtener su producto por sumas sucesivas.

*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Validar (long long int *pt_natural, long long int *pt_natural_1);
void Verifica (const long long int *pt_natural, long long int *pt_i);
void Sumar (const long long int *pt_natural, const long long int *pt_natural_1, long long int *pt_suma);
void Mostrar (const long long int *pt_natural, const long long int *pt_natural_1, const long long int *pt_suma);

#endif // FUNCIONES_H_INCLUDED
