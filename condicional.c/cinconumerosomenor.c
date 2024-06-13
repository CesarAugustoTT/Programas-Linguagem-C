#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1, n2, n3, n4, n5;
    printf("Digite 5 numeros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);

    if (n1<n2 && n1<n3 && n1<n4 && n1<n5)
    {
        printf("O menor numero : %d", n1);
    }

     else if (n2<n1 && n2<n3 && n2<n4 && n2<n5)
    {
        printf("O menor numero : %d", n2);
    }

     if (n3<n1 && n3<n2 && n3<n4 && n3<n5)
    {
        printf("O menor numero : %d", n3);
    }

     if (n4<n2 && n4<n3 && n4<n1 && n4<n5)
    {
        printf("O menor numero : %d", n4);
    }

     if (n5<n1 && n5<n2 && n5<n3 && n5<n4)
    {
        printf("O menor numero : %d", n5);
    }
    return 0;
}