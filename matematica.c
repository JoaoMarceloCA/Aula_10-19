#include <stdio.h>
#include <math.h>

int main()
{
    float n1 = 9.0f;
    float raiz = sqrt(n1);
    
    printf("A raiz quadrada de %.0f é: %.0f \n", n1, raiz);

    float n2 = 10.0f;
    float n3 = 2.0f;
    float poten = pow(n2, n3);

    printf("o valor de %.0f elevado a %.0f é igual = %.0f \n", n2, n3, poten);

    return 0;
}