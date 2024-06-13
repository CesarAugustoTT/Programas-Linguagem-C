/*Desenvolva um programa que simule as 4 operações matemáticas básicas.

A entrada para a escolha de uma das 4 operações disponíveis é dada da seguinte forma:

Soma
Subtração
Multiplicação
Divisão
Seguida dos 2 operandos que participarão efetivamente da operação.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
    int operador, n1, n2, resultado;
    printf("Digite 1 para somar, 2 para diminuir, 3 para multiplicar ou 4 para dividir\n");
    scanf("%d", &operador);

    printf("Digite um numero que deseja operar:\n");
    scanf("%d", &n1);

    printf("Digite outro numero que deseja operar:\n");
    scanf("%d", &n2);

    switch (operador) {
        case 1 :
            resultado = n1 + n2 ;
            printf("O resultado da soma = %d", resultado);
            break;
         case 2 :
            resultado = n1 - n2 ;
            printf("O resultado da subtracao = %d", resultado);
            break;
         case 3 :
            resultado = n1 * n2 ;
            printf("O resultado da multiplicacao = %d", resultado);
            break;
         case 4 :
            resultado = n1 / n2 ;
            printf("O resultado da divisao = %d", resultado);
            break;
        default :
            printf("Operador invalido!!\n");
            break;
    }
    return 0;
}