/*O comando BREAK finalizar a sequencia de repetição*/
#include <stdio.h>

int main ()
{
    int i;

for (i=1; i<=10; i++){
    printf("%d", i);

    if(i==5){
        break;
    }
}
    printf("\n Programa finalizado\n");
}