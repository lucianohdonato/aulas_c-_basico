#include <stdio.h>

main ()
{
int numero, resto;
	
printf ("Entre com um numero: ");
scanf ("%d",&numero);
	
resto=numero%2;

if (resto==1)
printf ("O numero e impar");
else
printf ("O numero e par");
	
}
	
