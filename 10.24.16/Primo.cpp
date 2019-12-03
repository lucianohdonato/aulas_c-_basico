#include <stdio.h>

main()
{
	int dc;
	dc=1;
	while (dc==1)
	{
		
	int x;
	int num;
	int resto;
	printf("Entre com um Numero\n");
	scanf("%d",&num);
	
	for (x=2;x<num;x++)
	{

	resto=num%x;
	
	if (resto==0)
	break;
		
	}
	
	if (resto==0)
	printf ("O numero nao e primo");
	else
	printf ("O numero e primo");



	printf ("\n\n\n\n\n\n\n\nDeseja continuar? (1-Sim/2-Nao)");
	scanf ("%d",&dc);
	
	if (dc==2)
	printf("\nObrigado por usar nossa calculadora");
	else
	dc=1;
				
	}
}
