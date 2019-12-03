#include <stdio.h>
#include <string.h>

main ()
{
float altura, alturap, alturam;
char nome[30], sexo;

printf ("Entre com o seu nome: ");
fflush (stdin);
gets (nome);

printf ("Entre com a altura do pai: ");
scanf ("%f",&alturap);

printf ("Entre com a altura da mae: ");
scanf ("%f",&alturam);

printf ("Entre com o seu sexo (Masculino/Feminino): ");
fflush (stdin);
scanf ("%c", &sexo);

if (sexo=='M') 
	altura=(alturam+alturap+0.13)/2;
else
	altura=(alturam+alturap-0.13)/2;
	
printf ("%s sua altura media sera: %.2f", nome,altura);
}
	
	
