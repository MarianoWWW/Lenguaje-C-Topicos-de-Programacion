#include "funciones.h"

int main()

{
    int vec[TAM] = {3, 7, 12, 18, 24, 31, 39, 45, 52, 60};

    printf("\n\nPrograma dedicado a insertar un numero de manera ordenada en un vector.");
    printf("\n\nEste va a ser el vector con dados para hacer la insercion : \n\n Datos :\t");

    for (int i = 0 ; i < TAM ; i++)
            printf("%d  ", *(vec+i));

    Insertar_ordenado(vec);

    printf("\n\n");
    system("pause");
    return 0;
}
