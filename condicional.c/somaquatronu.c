/*esse programa lê 4 números do usuario e soma os 3 numero menores*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int n1, n2, n3, n4, soma;
    printf("Digite 4 numeros inteiros:\n");
    scanf ("%d", &n1);
    scanf ("%d", &n2);
    scanf ("%d", &n3);
    scanf ("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        soma = n2 + n3 + n4;
        printf ("A soma dos tres numeros menores e %d\n", soma);
    }

    else if (n2 > n1 && n2 > n3 && n2 > n4 )
    {
        soma = n1 + n3 + n4;
        printf ("A soma dos tres numeros menores e %d\n", soma);
    }

    else if (n3 > n1 && n3 > n2 && n3 > n4 )
    {
        soma = n1 + n2 + n4;
        printf ("A soma dos tres numeros menores e %d\n", soma);
    }

    else if (n4 > n1 && n4 > n3 && n4 > n2 )
    {
        soma = n1 + n3 + n2;
        printf ("A soma dos tres numeros menores e %d\n", soma);
    }
    return 0;
}