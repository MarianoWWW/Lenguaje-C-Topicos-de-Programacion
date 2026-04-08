#include "funciones.h"

int main()
{
    char texto[10001];

    printf("\n\nIngrese una frase, para saber si es palindromo.");
    printf("\nMaximo 10.000 caracteres :");

    fgets (texto,10001,stdin);

    if (esPalindromo(texto))
        printf("\n\nEs palindromo.");
    else
        printf("\n\nNo es palindromo.");

    printf("\n\n");
    system("pause");
    return 0;
}
