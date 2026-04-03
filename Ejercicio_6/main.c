#include "funciones.h"

int main() {

    double total;
    double *pt_total = &total;

    Calcular(pt_total);
    Mostrar (pt_total);

    return 0;
}
