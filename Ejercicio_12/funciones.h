/*

Ejercicio 12
Construir un programa que lea un número natural N y calcule la suma de los números pares menores
que N.

*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Validar (long long int *pt_natural);
void Calcular (const long long int *pt_natural, long long int *pt_suma);
void Mostrar (const long long int *pt_natural, const long long int *pt_suma);

#endif // FUNCIONES_H_INCLUDED
