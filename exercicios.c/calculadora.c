/* Meu segundo programa da linguagem c: uma calculadora
*  O programa armazena 2 números e soma ou subtrai
*/


#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int nmr1, nmr2, op, x, y;

	printf ("Digite 1 para somar ou 2 para subtrair: \n");
	scanf ("%d" , &op); 

// o printf serve para imprimir o texto na tela
// o scanf serve para capturar a entrada do teclado e transforma na variavel (op)

	printf ("Digita o primeiro numero: \n");
	scanf ("%d" , &nmr1);

// o scanf pegou o numero digitado, pelo %d coloca o numero na tela e transforma na variavel nmr1

	printf ("Digita o segundo numero: \n");
	scanf ("%d" , &nmr2);

// a parte da entrada acabou, agora é o processamento de dados

	if (op==1) {

		x= nmr1 + nmr2;
		
		printf ("O resultado da soma e: %d \n", x);
	}

	else {
  		
		y= nmr1 - nmr2;
		
		printf ("O resultado da subtracao e: %d \n", y);
	}
// Se o op digitado for 1, vai somar, senão vai subtrair
	return 0;
}