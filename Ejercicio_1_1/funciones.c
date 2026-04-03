#include "funciones.h"

void Insertar (int *vec)

{
    int aux_1, aux_2, i, numero,pos , vec_original[TAM];

     for (i = 0 ; i < TAM ; i++)
        vec_original[i] = *(vec+i);

    printf("\n\nIngrese un numero para insertar. (Distinto de cero para poder diferenciarlo) : ");
    scanf("%d", &numero);

    printf("\n\nVale aclarar que el vector comienza con la posicion cero.");
    printf("\nEntonces las posiciones van a ser desde el 0 al %d en este caso.", TAM-1);
    do
    {
        printf("\n\nIngrese la posicion en la cual desea insertar el numero : ");
        scanf("%d", &pos);
        if (pos < 0 || pos > TAM-1)
            printf("\n\nError en el dato ingresado, intente nuevamente.");
    }while (pos < 0 || pos > TAM-1);

    aux_1 = *(vec+pos);
    *(vec+pos) = numero;

    for (i = 1 ; pos+i < TAM ; i++)
    {
        aux_2 = *(vec+pos+i);
        *(vec+pos+i) = aux_1;
        aux_1 = aux_2;
    }


        system("cls");
        printf("\n\n----------------------------------------");
        printf("\n\n--------- Como queda el vector ---------");
        printf("\n\n----------------------------------------");
        printf("\n\nOriginal :   ");

        for (i = 0 ; i < TAM ; i++)
            printf("%d  ", vec_original[i]);

        printf("\n%-13s", "Modificado :");

        for (i = 0 ; i < TAM ; i++)
            printf("%d  ", *(vec+i));
        printf("\n\nComo te habras dado cuenta la posicion %d se ve distinta dentro del array.", pos);
        printf("\nHay que acostumbrarse a trabajar con arrays que comienzan en 0.");
}
