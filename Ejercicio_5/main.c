#include "funciones.h"

int main ()
{
    long long int num;
    long long int *pt_num = &num;

    Validar (pt_num);
    Calcular_y_mostrar (pt_num);

    printf("\n\n");
    system("pause");
    return 0;
}
