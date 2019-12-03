#include <stdio.h>

main ()
{

float a, b, c;

printf ("Entre com o primeiro numero: ");
scanf ("%f",&a);	
	
printf ("Entre com o proximo numero: ");
scanf ("%f",&b);	

printf ("Entre com o ultimo numero: ");
scanf ("%f",&c);	
	
	if (a>b&&b>c)
	printf ("%f, %f, %f", c, b, a);
	else
	{
		if (a>c&&c>b)
		printf ("%f, %f, %f", b, c, a);
		else
		{
			if (b>a&&a>c)
			printf ("%f, %f, %f", c, a, b);
			else
			{
				if (b>c&&c>a)
				printf ("%f, %f, %f", a, c, b);
				else
				{
					if (c>a&&a>b)
					printf ("%f, %f, %f", b, a, c);
					else
					{
						if (c>b&&b>a)
						printf ("%f, %f, %f", a, b, c);
		
					}

				}

			}

		}

	}

}
