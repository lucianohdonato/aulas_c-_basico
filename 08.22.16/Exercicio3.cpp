#include <stdio.h>
main ()
{
	
int portas; /* Declaracao de Variaveis */
float largura, comprimento, carpete, rodape; /* Declaracao de Variaveis */

printf ("Qual a largura da sala (em metros): ");/* Entrada de Dados */
scanf ("%f",&largura);

printf ("Qual o comprimento da sala (em metros): ");/* Entrada de Dados */
scanf ("%f",&comprimento);

printf ("Quantas portas possui na sala: ");/* Entrada de Dados (considerando portas de 1m) */
scanf ("%d",&portas);

carpete=(largura*comprimento); /* Area do carpete (em metros quadrados) */

rodape=(2*largura + 2*comprimento - portas);

printf ("O carpete da sala tera %.2f m^2 e o rodape devera ter %.2f m",carpete,rodape);

}

