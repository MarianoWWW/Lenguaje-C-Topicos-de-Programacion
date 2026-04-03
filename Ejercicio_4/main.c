#include "funciones.h"

int main ()
{

    double a, tol, total;
    double *pt_a = &a, *pt_tol = &tol, *pt_total = &total;

    Validar (pt_a, pt_tol);
    Calcular (pt_a, pt_tol , pt_total);
    Mostrar (pt_a, pt_total);
    return 0;
}
