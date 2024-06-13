/*O comando CONTINUE finaliza a interação atual e passa para a proxima, se diferenciando do break.*/
#include <stdio.h>

int main ()
{
    int i;

for (i=1; i<=10; i++){
    
     if(i==5){
        continue;
    }
    printf("%d", i);
}
    printf("\n Programa finalizado\n");
}