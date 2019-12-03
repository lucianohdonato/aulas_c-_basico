#include <stdio.h>
#include <string.h>

int main ()

{

	int n, i, x, l, v, continua;
	
	
	continua=1;
	while (continua==1)
   {
   	
   	printf ("\nEntre com um numero: ");	
   	scanf ("%d", &n);
	
	v=0;
	i=1;
	for (x=1; x<=n; x++)
	{
	v++;
	
		for (l=1; l<=v; l++)
		{
			printf ("%d ",i);
			i++;
		
		}
		
	printf ("\n");	
	}
	
	printf ("\n\n\nDeseja continuar:\n1-Sim 2-Nao: ");	
   	scanf ("%d", &continua);
   	
   }
}

