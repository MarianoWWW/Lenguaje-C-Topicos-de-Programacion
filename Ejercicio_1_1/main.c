#include "funciones.h"

int main()
{
    int vec[TAM] = {2,9,7,1,4,6,0,5,3,9};

    printf("\n\nPrograma dedicado a insertar un numero en una posicion especifica, en un vector.");
    printf("\n\nEste va a ser el vector con dados para hacer la insercion : \n\n Datos :\t");

    for (int i = 0 ; i < TAM ; i++)
            printf("%d  ", *(vec+i));
    Insertar(vec);

    printf("\n\n");
    system("pause");
    return 0;
}
