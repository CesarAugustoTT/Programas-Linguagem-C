#include <stdio.h>
#include <math.h>

int main ()
{
    double h, a, c1, c2;
    printf ("Qual a hipotenusa do triangulo retangulo?\n");
    scanf ("%lf", &h);

    printf ("Qual e o angulo que a hipotenusa forma com os catetos?\n");
    scanf ("%lf", &a);

    c1 = sin(a) * h;
    c2 = cos(a) * h;
    
    printf ("O valor da hipotenusa e %lf, o valor do cateto 1 e %lf e o valor do cateto 2 e %lf\n", h, c1, c2);
    return 0 ;
}