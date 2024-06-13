/*Desenvolver um algoritmo para ler o número de uma sala de aula, sua capacidade e o total de 
alunos matriculados na mesma e imprimir uma linha mostrando o número da sala, sua capacidade, 
o número de cadeiras ocupadas e sua disponibilidade indicando se a sala está lotada ou não.*/

/* 1- ler o numero da sala, a capacidade e o total de alunos matriculados
   2- Se a capacidade for menor que o numero de matriculados a sala esta lotada, se for igual a sala
esta sem vaga e se for maior a sala tem vaga
   3- imprimir uma linha mostrando o numero da sala, a capacidade, o numero de cadeira ocupados, 
se esta lotada, sem vagas ou com vagos e a quantidade de vagas. */

#include <stdio.h>
#include <math.h>

int main ()
{
    int numero, capacidade, alunos, vagas;

    printf("Qual o numero da sala?\n");
    scanf("%d", &numero);

    printf("Qual a capacidade da sala?\n");
    scanf("%d", &capacidade);

    printf("Qual a quantidade de alunos matriculados?\n");
    scanf("%d", &alunos);

    printf("O numero da sala e %d\n", numero);
    printf("A capacidade da sala e de %d alunos\n", capacidade);
    printf("Tem %d alunos matriculados\n", alunos);

    if (capacidade < alunos)
    {
        printf("A sala esta lotada, nao tem vaga\n");
    }

    else if (capacidade == alunos)
    {
        printf("A sala esta toda preenchida, nao tem vaga\n");
    }

    else if (capacidade > alunos)
    {
        vagas = capacidade - alunos;
        printf("A sala nao esta cheia, tem %d vagas\n", vagas);
    }
    return 0;
}