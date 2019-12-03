#include <stdio.h>
#include <string.h>

int main ()

{
	int n1, n2, i, s, soma, continua, resto;
	
	
	continua=1;
	while (continua==1)
   {
   	
   	printf ("\nEntre com um numero: ");	
   	scanf ("%d", &n1);
   	
   do
		{
		printf ("\nEntre com o segundo numero: ");
		scanf("%d", &n2);
		if (n2<n1)
		printf ("\nIntervalo de valores invalido, entre com um numero maior");
		}
		while (n2<n1);
	
	resto=n1%2;
	if (resto==1)
	s=0;
	if (resto==0)
	s=1;
	
	n1=n1+s;
	soma=0;	
	for (i=n1; i<=n2; i=i+2)
	{
		soma=soma+i;
	}
	
	printf ("\n\n\nO resultado da soma vale: %d", soma);
	
	printf ("\n\n\nDeseja continuar:\n1-Sim 2-Nao: ");	
   	scanf ("%d", &continua);
   	
   }
}

