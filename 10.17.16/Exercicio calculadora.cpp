#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	int dc;
	
	dc=1;
	while (dc==1)
	{
	
	int a=0, b=0, resto;
	float c=0, resultado;	
	char operacao;
	
	printf ("\nEntre com a operacao:\n+ para soma\n- para subtracao\n* para multiplicacao\n/ para divisao\np para potencia\nr para resto\ni para inverso\nR para raiz\n");
	fflush (stdin);
	scanf ("%c",&operacao);
	
	switch (operacao)
	{
	case '+':
	printf ("\nentre com o primeiro numero:");
	scanf ("%d",&a);
	printf ("\nentre com o numero a ser somado:");
	scanf ("%d",&b);
	
	resultado=a+b;
	printf ("\nO resultado da soma e: %.2f", resultado);
	break;
	
	case '-':
	printf ("\nentre com o primeiro numero:");
	scanf ("%d",&a);
	printf ("\nentre com o numero a ser subtraido:");
	scanf ("%d",&b);
	
	resultado=a-b;
	printf ("\nO resultado da subtracao e: %.2f", resultado);
	break;
	
	case '*':
	printf ("\nentre com o primeiro numero:");
	scanf ("%d",&a);
	printf ("\nentre com o numero a ser multiplicado:");
	scanf ("%d",&b);
	
	resultado=a*b;
	printf ("\nO resultado da multiplicacao e: %.2f", resultado);
	break;
	
	case '/':
	printf ("\nentre com o numerador:");
	scanf ("%d",&a);
	printf ("\nentre com o denominador:");
	scanf ("%d",&b);
	
	if (b!=0)
	{
	resultado=a/b;
	printf ("\nO resultado da multiplicacao e: %.2f", resultado);
	}
	else
	printf ("\nOpcao invalida, nao se pode dividir por 0");
	break;
	
	case 'p':
	printf ("\nentre com o numero a ser elevado:");
	scanf ("%d",&a);
	printf ("\nentre com o expoente:");
	scanf ("%d",&b);
	
	resultado=pow(a,b);
	printf ("\nO resultado da multiplicacao e: %.2f", resultado);
	break;
	
	case 'r':
	printf ("\nentre com o dividendo:");
	scanf ("%d",&a);
	printf ("\nentre com o divisor:");
	scanf ("%d",&b);
	
	resto=a%b;
	printf ("\nO resto da divisao e: %d", resto);
	break;
	
	case 'i':
	printf ("\nentre com o numero:");
	scanf ("%f",&c);
		
	if (c!=0)
	{
	resultado=1/c;
	printf ("\nO inverso do numero e: %.2f", resultado);
	}
	else
	printf ("\nOpcao invalida, nao existe o inverso de 0");
	break;
	
	case 'R':
	printf ("\nentre com o numero:");
	scanf ("%d",&a);
	
	if (a>=0)
	{
	resultado=sqrt(a);
	printf ("\nA raiz de %d e: %.2f", a, resultado);
	}
	else
	printf ("\nNumero invalido, entre com um valor positivo para ter uma raiz real");
	break;
	
	default:
	printf ("\nOperacao invalida, respeitar o menu");
	}
	
	printf ("\n\n\n\n\n\n\n\nDeseja continuar? (1-Sim/2-Nao)");
	scanf ("%d",&dc);
	
	if (dc==2)
	printf("\nObrigado por usar nossa calculadora");
	else
	dc=1;
				
	}
		

}
