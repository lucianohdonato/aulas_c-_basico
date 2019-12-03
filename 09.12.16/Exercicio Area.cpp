#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

main ()
{

float l, a, b, B, h, r, Bm, BM, alt, f, A=0, op;

op=1;

while (op==1)
{
printf ("\n Escolha a figura que deseja saber a area: \n");
	
printf ("Quadrado (1):\n");
printf ("Retangulo (2):\n");
printf ("Triangulo (3):\n");
printf ("Circulo (4):\n");
printf ("Paralelogramo (5):\n");

scanf ("%f",&f);	
	
	if (f==1)
	{
	printf ("Entre com o lado do quadrado:");
	scanf ("%f",&l);
	A=l*l;
	printf ("O valor da area e: %.2f", A);
	}
	else
	{
		if (f==2)
		{
		printf ("Entre com o lado do retangulo:");
		scanf ("%f",&a);
		printf ("Entre com a base do retangulo:");
		scanf ("%f",&b);
		A=a*b;
		printf ("O valor da area e: %.2f", A);
		}
		else
		{
			if (f==3)
			{
			printf ("Entre com a altura do triangulo:");
			scanf ("%f",&h);
			printf ("Entre com a base do trangulo:");
			scanf ("%f",&B);
			A=(B*h)/2;
			printf ("O valor da area e: %.2f", A);
			}
			else
			{
				if (f==4)
				{
				printf ("Entre com o raio do circulo:");
				scanf ("%f",&r);
				A=3.14*r*r;
				printf ("O valor da area e: %.2f", A);
				}
				else
				{
					if (f==5)
					{
					printf ("Entre com a base maior do paralelogramo:");
					scanf ("%f",&BM);
					printf ("Entre com a base menor do paralelogramo:");
					scanf ("%f",&Bm);
					printf ("Entre com a altura do paralelogramo:");
					scanf ("%f",&alt);
					A=((BM+Bm)*alt)/2;
					printf ("O valor da area e: %.2f", A);
					}
					else
					{
						printf ("Numero invalido");
		
					}

				}

			}

		}

	}

getch();
system ("cls");
printf ("\n Deseja continuar? (1-Sim 2-Nao)");
scanf ("%f",&op);

}

system ("cls");
printf ("Obrigado por usar nosso programa");
getch();

}
