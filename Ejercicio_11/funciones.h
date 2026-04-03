/*

Ejercicio 11
Construir un programa que lea un número natural N y calcule la suma de los primeros N números
pares.


*/


#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void Validar (long long int *pt_natural);
void Calcular (const long long int *pt_natural, long long int *pt_suma);
void Mostrar (const long long int *pt_natural, const long long int *pt_suma);

#endif // FUNCIONES_H_INCLUDED
