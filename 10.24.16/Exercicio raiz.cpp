#include <stdio.h>

main()
{
		int i;
	int dc;
	dc=1;
	while (dc==1)
	{
		
	int x=0;

	int num=0;
	int resultado=0;
	printf("Entre com um Nuumero\n");
	scanf("%d",&num);
	resultado=num;
		i=0;
	for (x=1;x<num;x=x+2)
	{

	resultado=resultado-x;
	i++;
	
	if (resultado==0)
	break;
	}
	
	if (resultado==0)
	printf ("a raiz e: %d",i);
	else
	printf ("o numero nao tem raiz exata");
	
	printf ("\n\n\n\n\n\n\n\nDeseja continuar? (1-Sim/2-Nao)");
	scanf ("%d",&dc);
	
	if (dc==2)
	printf("\nObrigado por usar nossa calculadora");
	else
	dc=1;
}
}

