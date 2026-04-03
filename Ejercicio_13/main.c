#include "funciones.h"

int main ()
{
    long long int natural, resultado;
    long long int *pt_natural = &natural, *pt_resultado = &resultado;

    Validar (pt_natural);
    Calcular (pt_natural, pt_resultado);
    Mostrar (pt_natural, pt_resultado);
    return 0;
}
