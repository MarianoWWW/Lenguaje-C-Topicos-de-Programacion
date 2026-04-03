#include "funciones.h"

void Eliminar(int *vec)

{
    int largo_vec = TAM, i,pos , vec_original[TAM];

     for (i = 0 ; i < TAM ; i++)
        vec_original[i] = *(vec+i);

    do
    {
        printf("\n\nIngrese la posicion en la cual desea eliminar un registro : ");
        scanf("%d", &pos);
        if (pos < 0 || pos > TAM-1)
            printf("\n\nError en el dato ingresado, intente nuevamente.");
    }while (pos < 0 || pos > TAM-1);

    for (i = 0 ; i < TAM-pos-1 ; i++)
    {
        *(vec+pos+i) = *(vec+pos+i+1);
    }

        largo_vec--;
        system("cls");
        printf("\n\n----------------------------------------");
        printf("\n\n--------- Como queda el vector ---------");
        printf("\n\n----------------------------------------");
        printf("\n\nOriginal :   ");

        for (i = 0 ; i < TAM ; i++)
            printf("%d  ", vec_original[i]);

        printf("\n%-13s", "Modificado :");

        for (i = 0 ; i < largo_vec ; i++)
            printf("%d  ", *(vec+i));
        printf("\n\nComo te habras dado cuenta la posicion %d se ve distinta dentro del array.", pos);
        printf("\nHay que acostumbrarse a trabajar con arrays que comienzan en 0.");
}
