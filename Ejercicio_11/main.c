#include "funciones.h"

int main ()
{
    long long int natural, suma = 0;
    long long int *pt_natural = &natural, *pt_suma = &suma;

    Validar (pt_natural);
    Calcular (pt_natural, pt_suma);
    Mostrar (pt_natural, pt_suma);
    return 0;
}
