#include <stdio.h>

main()
{
	int c1=0, c2=0, c3=0, c4=0, c5=0, branco=0, nulo=0, voto=0, vt=0, dc=1, desejo=1;

	while (dc=1)
	{
	
	printf ("\n Entre com o numero do voto \n1-Chaves \n2-Barriga \n3-Florinda \n4-Kiko \n5-Chiquinha \n6-Branco \n0-Nulo");
	scanf ("%d", &voto);
	
	if (voto==99)
	break;
	
	if (voto>=0 && voto<=6)
	{
		vt++;
		if (voto==1)
		c1++;
		if (voto==2)
		c2++;
		if (voto==3)
		c3++;
		if (voto==4)
		c4++;
		if (voto==5)
		c5++;
		if (voto==6)
		branco++;
		if (voto==0)
		nulo++;
		
	}
		
		
	if (voto!=99 && voto!=0 && voto!=1 && voto!=2 && voto!=3 && voto!=4 && voto!=5 &&voto!=6)
	printf ("Voto invalido");
	
		
	printf ("\nDeseja continuar? (1-Sim/2-Nao)");
	scanf ("%d", &desejo);
	
	if (desejo==2)
	{
		printf("\nTotal de votos: %d ", vt);
		printf("\nTotal de votos do Chaves: %d ", c1);
		printf("\nTotal de votos do Barriga: %d ", c2);
		printf("\nTotal de votos da Florinda: %d ", c3);
		printf("\nTotal de votos do Kiko: %d ", c4);
		printf("\nTotal de votos da Chiquinha: %d ", c5);
		printf("\nTotal de votos Brancos: %d ", branco);
		printf("\nTotal de votos Nulos: %d ", nulo);
		
		if (c1>c2 && c1>c3 && c1>c4 && c1>c5)
		printf("\n Chaves e o vencedor com %d votos", c1);
		if (c2>c1 && c2>c3 && c2>c4 && c2>c5)
		printf("\n Barriga e o vencedor com %d votos", c2);
		if (c3>c1 && c3>c2 && c3>c4 && c3>c5)
		printf("\n Florinda e a vencedora com %d votos", c3);
		if (c4>c1 && c4>c2 && c4>c3 && c4>c5)
		printf("\n Kiko e o vencedor com %d votos", c4);
		if (c5>c1 && c5>c2 && c5>c3 && c5>c4)
		printf("\n Chiquinha e a vencedora com %d votos", c5);
		if (c1==c2 || c1==c3 || c1==c4 || c1==c5 || c2==c3 || c2==c4 || c2==c5 || c3==c4 || c3==c5 || c4==c5)
		printf("\n Houve um empate");
		
	}
			
	}
		

}

