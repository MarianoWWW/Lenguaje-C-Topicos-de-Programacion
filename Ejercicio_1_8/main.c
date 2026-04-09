#include "funciones.h"

int main()
{


    int cantidad, inicial = 10;
    char *texto = malloc(inicial * sizeof(char));
    if (texto == NULL)
    {
        printf("\nError en la asignación de memoria");
        exit(1);
    }

    char *cad = malloc(inicial * sizeof(char));
    if (cad == NULL)
    {
        free(texto);
        printf("\nError en la asignación de memoria");
        exit(1);
    }

    printf("\n\nBusqueda de una palabra en determinado texto.");
    printf("\n\nIngrese el texto necesario : ");

    texto = Ingresar_texto(texto, inicial);

    printf("\n\nIngrese la palabra a buscar : ");

    cad = Ingresar_texto(cad, inicial);

    cantidad = Busqueda(texto, cad);

    printf("\n\nLa palabra \"%s\" se repite %d veces en el texto.", cad, cantidad);

    free(texto);
    free(cad);
    printf("\n\n");
    system("pause");
    return 0;
}
