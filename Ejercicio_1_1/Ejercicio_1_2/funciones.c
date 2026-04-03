#include "funciones.h"

void Insertar_ordenado(int *vec)

{
    int i, numero, pos, vec_original[TAM];

    for (i = 0 ; i < TAM ; i++)
        vec_original[i] = *(vec+i);

    printf("\n\nIngrese un numero para insertar : ");
    scanf("%d", &numero);

     for (i = 0 ; i < TAM ; i++)
     {
         if (*(vec+i) <= numero)
            pos = i;
         else
            break;
     }

     for (i = TAM-1 ; i > pos+1 ; i--)
        *(vec+i) = *(vec+i-1);
     *(vec+pos+1) = numero;

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

}
