/*Vetores dados de entrada e saída*/
#include<stdio.h>
int main (){
    int v[5];
    int i;
    float s=0;

    for(i=0; i<5; i++){
        printf("Insira um numero:\n");
        scanf("%d", &v[i]);
    }
    printf("Os numeros inseridos foram:\n");
    for(i=0; i<5; i++){
        printf("%d \n", v[i]);
    }
    for(i=0; i<5;i++){
        s = s + v[i];
    }
    s = s/5;
    printf("\n a media dos numeros = %f", s);
}