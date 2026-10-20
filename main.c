#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50] = "Marcelo";
    int idade = 22;
    double altura = 1.75;
    double salario = 1234.567;

    printf("Ola %s!\n", nome);
    printf("Voce tem %d anos e tem %.2f de altura; e ganho %.3f de dinheiro", idade, altura, salario);
}