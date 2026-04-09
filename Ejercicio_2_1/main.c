#include "funciones.h"

int main()
{
    int *enteros = malloc(TAM * sizeof(int));
    int i;

    for (i = 0 ; i < TAM ; i++)
    {
        *(enteros+i) = i*4;
    }
    printf("\n\n----------------------------------------------------------------------------------------------------");
    printf("\n\nDatos dentro del vector : ");
    printf("\n\n");
    for (i = 0 ; i < TAM ; i++)
    {
        printf("%d ", *(enteros+i));
    }
    printf("\n\n----------------------------------------------------------------------------------------------------");



    printf("\n\n");
    system("pause");
    return 0;
}
