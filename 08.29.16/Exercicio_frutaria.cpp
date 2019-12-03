#include <stdio.h>
main ()
{
	
int entrega, pagamento;
float morango, Morango, maca, Maca, abacaxi, Abacaxi, pera, Pera, valor, Valor, peso, parcela;

printf ("Deseja entrega? (1=SIM / 2=NAO): ");
scanf ("%d",&entrega);
if (entrega==1)
entrega=10;
else
entrega=0;

printf ("Entre com a quantidade de morango (em KG)): ");
scanf ("%f",&morango);
if (morango<=5)
Morango=morango*2.55;
if (morango>5&&morango<=9)
Morango=morango*2.3;
if (morango>9)
Morango=morango*2;

printf ("Entre com a quantidade de maca (em KG)): ");
scanf ("%f",&maca);
if (maca<=5)
Maca=maca*3.2;
if (maca>5&&maca<=9)
Maca=maca*3;
if (maca>9)
Maca=maca*2.75;

printf ("Entre com a quantidade de abacaxi (em KG)): ");
scanf ("%f",&abacaxi);
if (abacaxi<=5)
Abacaxi=abacaxi*4.1;
if (abacaxi>5&&abacaxi<=9)
Abacaxi=abacaxi*3.8;
if (abacaxi>9)
Abacaxi=abacaxi*3.5;

printf ("Entre com a quantidade de pera (em KG)): ");
scanf ("%f",&pera);
if (pera<=5)
Pera=pera*2.9;
if (pera>5&&pera<=9)
Pera=pera*2.65;
if (pera>9)
Pera=pera*2.4;

valor=Morango+Maca+Abacaxi+Pera;
peso=morango+maca+abacaxi+pera;

if (valor>100)
Valor=valor*0.92+entrega;
else
	if (peso>10)
	Valor=valor*0.92+entrega;
	else
	Valor=valor+entrega;

printf ("Qual a forma de pagamento (1=Dinheiro / 2=Debito / 3=Credito): ");
scanf ("%d",&pagamento);

if (pagamento==3)
{
parcela=Valor/3;
printf ("O valor da compra são 3 parcelas de %.2f ",parcela);
}
if (pagamento==1)
printf ("O valor da compra e: %.2f ",Valor);
if (pagamento==2)
printf ("O valor da compra e: %.2f ",Valor);

}

