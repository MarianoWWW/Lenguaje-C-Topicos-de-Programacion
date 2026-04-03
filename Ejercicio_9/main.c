#include "funciones.h"

int main ()
{
    long long int natural, natural_1;
    long long int *pt_natural = &natural, *pt_natural_1 = &natural_1;

    Validar (pt_natural, pt_natural_1);
    Dividir_y_mostrar (pt_natural, pt_natural_1);

    return 0;
}
