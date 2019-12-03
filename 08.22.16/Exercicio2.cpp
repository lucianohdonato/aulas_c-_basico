#include <stdio.h>
main ()
{
	
int tempo, cigarros; /* Declaracao de Variaveis */
float valor, custo; /* Declaracao de Variaveis */

printf ("Ha quanto anos voce fuma: ");/* Entrada de Dados */
scanf ("%d",&tempo);

printf ("O valor de um maco e: ");/* Entrada de Dados */
scanf ("%f",&valor);

printf ("Quantos cigarros consome ao dia: ");/* Entrada de Dados */
scanf ("%d",&cigarros);


custo=((valor/20)*cigarros*365.25*tempo); /* Custo total */

printf ("Voce gastou durante %d anos %.2f reais",tempo,custo);

}

