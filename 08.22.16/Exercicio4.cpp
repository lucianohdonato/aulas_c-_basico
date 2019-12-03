#include <stdio.h>
main ()
{
	

float F, C; /* Declaracao de Variaveis */

printf ("Qual e a temperatura (em Fahrenheit): ");/* Entrada de Dados */
scanf ("%f",&F);

C=((F-32)*0.555556); /* Calculo da tempera (em Celsius) */

printf ("A temperatura equivalente em Celsius e: %.2f C", C);

}

