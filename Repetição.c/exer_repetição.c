#include <stdio.h>

int main ()
{
    int i;
    int resto;

for (i=1; i<=100; i++){
    resto = i % 2;
     if(resto = 0){
        continue;
    }
    printf("%d", i);
}
    printf("\n Programa finalizado\n");
}