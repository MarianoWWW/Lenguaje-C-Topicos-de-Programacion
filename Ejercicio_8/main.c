#include "funciones.h"

int main ()
{
    long long int natural, natural_1, suma = 0;
    long long int *pt_natural = &natural, *pt_natural_1 = &natural_1, *pt_suma = &suma;

    Validar (pt_natural, pt_natural_1);
    Sumar (pt_natural, pt_natural_1, pt_suma);
    Mostrar (pt_natural, pt_natural_1, pt_suma);

    return 0;
}
