/*Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e 
calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a 
classificação das raízes.*/
/*Ax*+Bx+C=0     delta=B*-4.A.C    X'=-B+<delta/2.A  x"=-B-<delta/2.A   */


#include<stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Vamos resolver equacao de segundo grau. Digite o valor dos coeficientes da equacao:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta<0)
    {
        printf("A equacao nao tem solucao\n");
    }
    else {
        x1 = (-b + sqrt(delta))/ 2 * a;
        x2 = (-b - sqrt(delta))/ 2 * a;
        printf("O valor do x1 e %.2f e o valor de x2 e %.2f\n", x1, x2);
    }
    return 0;
}

