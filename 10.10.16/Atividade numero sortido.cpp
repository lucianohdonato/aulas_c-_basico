#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define max 20
#include <string.h>

main()
{
	int dc=1, r=100, t=0;
	
   while (dc==1)
   {
   	
   	int i, x, y;
   	char nome[30], top[30];
   	
   	printf ("\n Entre com o seu nome: ");
	fflush (stdin);
	gets (nome);

    srand(time(NULL) );
    x=rand() %21;
		
	t=0;
	y=100;
	while (x!=y)
   	{
   		printf ("\n Entre com o palpite: ");
		scanf ("%d", &y);	
   		t++;
   		
		  if(x<y)
		   	printf ("\n Seu numero e maior, digite outro menor");
   		  if(x>y)
		  	printf ("\n Seu numero e menor, digite outro maior");
		  
	}
   	
   	printf ("\n Parabens, vc acertou o numero, em %d tentativas", t);
   	
   	if(t<r)
	{
		printf ("\n Parabens, vc e o novo recordista com %d tentativas", t);
		r=t;
		strcpy(top,nome);
	}
	
   	printf ("\nO recordista e: %s com %d tentativas", top, r);
   	
   	
	printf ("\n Deseja continuar:\n1-Sim 2-Nao");	
   	scanf ("%d", &dc);
   	
   }
                
}

