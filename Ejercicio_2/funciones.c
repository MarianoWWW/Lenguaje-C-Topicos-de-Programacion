#include "funciones.h"

void Combi (long long int m, long long int n)

{
    long long int m_1, n_1, resta, resultado;

    if (m == 0)
        m_1 = 1;
    else
        m_1 = Factorial(m);

    if (n == 0)
        n_1 = 1;
    else
        n_1 = Factorial(n);

    resta = Factorial(m-n);
    resultado = m_1 / (n_1 * resta);

    printf("\n\n El resultado es %lld", resultado);

}

long long int Factorial (long long int numero)

{
    long long  int num = 1;

    for (int i = numero ; i > 0 ; i-- )
    {
        num = num*i;
    }
    return num;
}
