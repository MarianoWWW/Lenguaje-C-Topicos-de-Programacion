#include "funciones.h"

void Eliminar_primer(int *vec)

{
    int num, largo_vec = TAM, i,pos = -1, vec_original[TAM];

     for (i = 0 ; i < TAM ; i++)
        vec_original[i] = *(vec+i);

    do
    {
        printf("\n\nIngrese el numero (primera aparicion) que desea eliminar : ");
        scanf("%d", &num);

        for (i = 0 ; i < TAM ; i++)
        {
            if (*(vec+i) == num)
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
    printf("\n\nError, ese numero no esta dentro del vector, intente nuevamente.");

    }while ( pos == -1);


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
        printf("\n\nAhora el array tiene %d posiciones legibles.", largo_vec);

}
