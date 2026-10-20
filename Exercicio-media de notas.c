#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int nota1, nota2;

    printf("Qual o nome do aluno? \n");
    scanf("%s", nome);
    printf("Quando ele/a tirou de nota na materia A? \n");
    scanf("%d", &nota1);
    printf("e na materia B? \n");
    scanf("%d", &nota2);

    int resultado = (nota1 + nota2)/210;

    printf("Entendo, então a media da nota de %s é: %d", nome, resultado);

    return 0;
}