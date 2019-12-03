#include <stdio.h>
main ()
{
	
float nota1, nota2, media; /* Declaracao de Variaveis */

printf ("Entre com a nota 1: ");/* Entrada de Dados */
scanf ("%f",&nota1);

printf ("Entre com a nota 2: ");/* Entrada de Dados */
scanf ("%f",&nota2);

media=(nota1+2*nota2)/3; /* Calculo da media */
printf ("Sua nota final e: %2.2f", media);

}

