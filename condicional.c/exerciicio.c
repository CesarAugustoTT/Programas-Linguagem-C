/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal´ario e
n´umero de filhos. A prefeitura deseja saber:
a. A m´edia do sal´ario da popula¸c˜ao;
b. A m´edia do n´umero de filhos;
c. O maior sal´ario;
d. O percentual de pessoas com sal´ario at´e R$1080,00*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float s1, s2, s3, s4, s5, f1, f2, f3, f4, f5, medias, mediaf, porcentagem;
    int familia = 0;

    printf("Digite os salarios das 5 familias da rua:\n");
    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3);
    scanf("%f", &s4);
    scanf("%f", &s5);

    printf("Digite o numero de filhos de cada familia:\n");
    scanf("%f", &f1);
    scanf("%f", &f2);
    scanf("%f", &f3);
    scanf("%f", &f4);
    scanf("%f", &f5);

    medias = (s1 + s2 + s3 + s4 + s5)/5;
    printf("A media do salario dessa rua e %.2f \n", medias);
    mediaf = (f1 + f2 + f3 + f4 + f5)/5;
    printf("A media do numero de filhos dessa rua e %.2f \n", mediaf);

    if (s1>s2 && s1>s3 && s1>s4 && s1>s5){
        printf("O maior salario e %.2f\n", s1);
    }
    else if (s2>s1 && s2>s3 && s2>s4 && s2>s5){
        printf("O maior salario e %.2f\n", s2);
    }
    if (s3>s1 && s3>s2 && s3>s4 && s3>s5){
        printf("O maior salario e %.2f\n", s3);
    }
     if (s4>s1 && s4>s2 && s3<s4 && s4>s5){
        printf("O maior salario e %.2f\n", s4);
    }
     if (s5>s1 && s5>s2 && s5>s4 && s3<s5){
        printf("O maior salario e %.2f\n", s5);
    }

    if (s1<=1080.00){
        familia++;
    }
    if (s2<=1080.00){
        familia++;
    }
    if (s3<=1080.00){
        familia++;
    }
    if (s4<=1080.00){
        familia++;
    }
    if (s5<=1080.00){
        familia++;
    }

    porcentagem = (familia * 100) / 5;
    printf("O percentual de pessoas com salario ate 1080.00 reais e %.2f porcento\n", porcentagem);
    return 0;
}
