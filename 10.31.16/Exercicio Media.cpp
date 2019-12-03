#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()

{
	char nome[50], dc;
	float n1, n2, media, resultado;
	int continua;
	
	continua=1;
	while (continua==1)
   {
   	
	dc='N';
	while (dc=='N')
	{
		printf ("\n Entre com o seu nome: ");
		fflush (stdin);
		gets (nome);
		
		do
		{
		printf ("\nEntre com a nota da primeira avaliacao:");
		scanf("%f", &n1);
		if (n1<0 || n1>10)
		printf ("\nNota invalida");
		}
		while (n1<0 || n1>10);
		
		do
		{
		printf ("\nEntre com a nota da segunda avaliacao:");
		scanf("%f", &n2);
		if (n2<0 || n2>10)
		printf ("\nNota invalida");
		}
		while (n2<0 || n2>10);
		
		do
		{
		printf ("\nOs dados estão corretos (S/N)?");
		fflush (stdin);
		scanf("%c", &dc);
		}
		while (dc!='S' && dc!='N');
	}

	system("cls");	
	media=(n1+n2)/2;
	if (media<3)
	{
		printf ("\nNome: %s\n1a.Avaliacao\t2.aAvaliacao\tMedia\tResultado", nome);
		printf ("\n%.2f\t\t%.2f\t\t%.2f\tReprovado", n1, n2, media);
	}

	if (media>=3 && media<6)
	{
		printf ("\nNome: %s\n1a.Avaliacao\t2.aAvaliacao\tMedia\tResultado", nome);
		printf ("\n%.2f\t\t%.2f\t\t%.2f\tEm Exame\nObs.: Voce devera obter nota 6,0 no exame para aprovacao!", n1, n2, media);
	}

	if (media>=6)
	{
		printf ("\nNome: %s\n1a.Avaliacao\t2.aAvaliacao\tMedia\tResultado", nome);
		printf ("\n%.2f\t\t%.2f\t\t%.2f\tAprovado", n1, n2, media);
	}
	
	printf ("\n\n\nDeseja continuar:\n1-Sim 2-Nao");	
   	scanf ("%d", &continua);
   	
   }
}

