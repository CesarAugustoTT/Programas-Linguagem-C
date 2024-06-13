/*César Augusto Tiago Totô - 24.1.4038
* Exercício 4 - Programa que converte graus Celcius em graus Fahrenheit e Kelvin
*/

#include <stdio.h>
int main ()
{
    float c, f, k;
    printf ("Entre com o valor em graus Celsius:");
    scanf ("%f", &c);

    f = (9.0/5) * c + 32;
    k = c + 273.15;

    printf ("Celsius: c = %.2f", c);
    printf ("Fahrenheit: f = %.2f", f);
    printf ("Kelvin: k = %.2f", k);

    return 0;
}