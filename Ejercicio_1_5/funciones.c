#include "funciones.h"

void Eliminar_todos(int *vec)
{
    int j, num, largo_vec = TAM, i, pos = -1, vec_original[TAM];
    for (i = 0 ; i < TAM ; i++)
        vec_original[i] = *(vec+i);
    do
    {
        printf("\n\nIngrese el numero que desea eliminar : ");
        scanf("%d", &num);

        for (i = 0 ; i < largo_vec ; i++)
        {
            if (*(vec+i) == num)
            {
                pos = i;
                for (j = i ; j < largo_vec-1 ; j++)
                    *(vec+j) = *(vec+j+1);
                largo_vec--;
                i--;
            }
        }

        if (pos == -1)
            printf("\n\nError, ese numero no esta dentro del vector, intente nuevamente.");

    }while (pos == -1);

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

