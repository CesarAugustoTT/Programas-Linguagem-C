/*Um comerciante comprou um produto e quer vendˆe-lo com um lucro de 45% se o seu valor for menor
que R$ 20,00; caso contr´ario, o lucro ser´a de 30%.
Crie um programa para ler o valor de um ´unico produto e imprimir o valor de venda, j´a com o lucro
embutido.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float produto, valor;
    printf("Qual o valor do produto?\n");
    scanf("%f",&produto);

    if (produto < 20)
    {
        valor = (produto * 0.45) + produto;
        printf("O valor do produto com o lucro: %.2f", valor);
    }

    else {
        valor = (produto * 0.30) + produto;
        printf("O valor do produto com o lucro: %.2f", valor);
    }
    return 0; 
}