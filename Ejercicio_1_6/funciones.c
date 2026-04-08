#include "funciones.h"

int esPalindromo(const char *cadena)
{
    int i = 0, j = strlen(cadena) - 1;

    while (i < j) {

        if (!isalnum(cadena[i])) {
            i++;
            continue;
        }
        if (!isalnum(cadena[j])) {
            j--;
            continue;
        }
        if (tolower(cadena[i]) != tolower(cadena[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}



