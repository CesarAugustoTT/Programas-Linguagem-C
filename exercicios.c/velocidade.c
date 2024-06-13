/* César Augusto Tiago Totô - 24.1.4038
* Exercício 3 - Calcular a velocidade
*/

#include <stdio.h>
int main ()
{
	float d, t, v;
	printf ("Entre com o valor da distancia (em km):");
	scanf ("%f", &d);
	
	printf ("Entre com o valor do tempo (em horas):");
	scanf ("%f" , &t);
	
	v = d / t ;
	
	printf ("A velocidade media = %.2f km/h", v);
	return 0;
}