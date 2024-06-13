/*Crie um programa que leia o peso de uma pessoa no planeta Terra. Além disso, o usuário deve
selecionar um dos planetas da lista abaixo, para que seu peso naquele planeta seja calculado. A
fórmula para o cálculo do peso é:
peso= massa * gravidade do planeta.
Calcule o peso e imprima uma mensagem dizendo qual é o planeta selecionado e qual é o peso calculado.
Caso seja escolhido um planeta que não consta da lista, uma mensagem de erro deve ser apresentada.
Use a instrução switch*/

/* planeta mercurio = 1, venus = 2, terra = 3, marte = 4, jupiter= 5, saturno = 6, urano = 7 e neturno = 8 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float peso, massa ;
    int planeta ;
    printf("Qual a sua massa em quilograma?\n");
    scanf("%f", &massa);

    printf("Qual é o planeta que voce quer saber o seu peso?. Digite 1 para mercurio, 2 para venus, 3 para terra, 4 para marte, 5 para jupiter, 6 para saturno, 7 para urano ou 8 para neturno:\n");
    scanf("%d", &planeta);

    switch (planeta) {
        case 1 :
            peso = massa * 3.7 ;
            printf("Seu peso é %.2f Newtons no planeta Mercurio", peso);
            break;
        case 2 :
            peso = massa * 8.87 ;
            printf("Seu peso é %.2f Newtons no planeta Venus", peso);
            break;
        case 3 :
            peso = massa * 10.0 ;
            printf("Seu peso é %.2f Newtons no planeta terra", peso);
            break;
        case 4 :
            peso = massa * 3.71 ;
            printf("Seu peso é %.2f Newtons no planeta Marte", peso);
            break;
        case 5 :
            peso = massa * 24.79 ;
            printf("Seu peso é %.2f Newtons no planeta Jupiter", peso);
            break;
        case 6 :
            peso = massa * 10.44 ;
            printf("Seu peso é %.2f Newtons no planeta saturno", peso);
            break;
        case 7 :
            peso = massa * 8.69 ;
            printf("Seu peso é %.2f Newtons no planeta Urano", peso);
            break;
        case 8 :
            peso = massa * 11.15 ;
            printf("Seu peso é %.2f Newtons no planeta Neturno", peso);
            break;
        default :
            printf("Planeta invalido\n");
            break;
    }
    return 0;
}