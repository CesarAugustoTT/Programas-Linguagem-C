/*Faça um programa que calcule o fatorial de um número.

Esse programa deve receber como entrada um número inteiro positivo e imprimir na tela o fatorial dele.*/

#include <stdio.h>

int main ()
{
    int numero;
    int resposta =  1;

    printf("Digite um numero:\n");
    scanf("%d",&numero);

    for ( ; numero>=1; --numero) {
        resposta = resposta * numero;
    }
    printf("\n O fatorial desse numero e igual a %d \n", resposta);
}