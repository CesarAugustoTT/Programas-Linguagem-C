/*Esse programa lê um número e fala se é divisível ou não por 3 e 5, exercício de linguagem em c*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int numero;
    printf ("Vamos descobrir se o numero e divisivel por 3 e 5. Digite um numero inteiro:");
    scanf ("%d", &numero);

    if (((numero % 3)==0) && ((numero % 5)==0)) 
    {
        printf ("O numero %d e divisivel.\n", numero);
    }
    else {
        printf ("O numero %d nao e divisivel.\n", numero);
    }
    return 0;
}