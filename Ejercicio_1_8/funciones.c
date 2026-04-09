#include "funciones.h"

char *Ingresar_texto(char *texto, int inicial)

{
    int total = 0;
    do
    {
        fgets(texto+total, inicial-total, stdin);

        while (*(texto+total) != '\n' && *(texto+total) != '\0')
            total++;

        if (*(texto+total) != '\n')
        {
            inicial = inicial *2;
            texto = realloc(texto, inicial * sizeof(char));
            if (texto == NULL)
                {
                    printf("\nError en la asignación de memoria");
                    exit(1);
                }
        }
    }while (*(texto+total) != '\n');

    *(texto+total) = '\0';
    return texto;
}

int Busqueda(char *texto, char *cad)
{
    int largo, cantidad =0, contador = 0, cont_pal = 0;

    largo = strlen(cad);
    while (*(texto+contador) != '\0')
    {
        while (*(texto+contador) == *(cad+cont_pal))
        {
            if (cont_pal+1 == largo)
            {
                cantidad++;
                break;
            }

            contador++;
            cont_pal++;
        }
    contador++;
    cont_pal = 0;
    }
    return cantidad;
}
