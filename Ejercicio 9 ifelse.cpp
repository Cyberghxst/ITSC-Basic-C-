/*Una empresa quiere hacer una compra de varias piezas de la misma clase a una fábrica de refacciones. 
La empresa, dependiendo del monto total de la compra, decidirá qué hacer para pagar al fabricante. 
- Si el monto total de la compra excede de $500.000 
la empresa tendrá la capacidad de invertir de su propio dinero un 55% del monto de la compra, 
pedir prestado al banco un 30% y el resto lo pagará solicitando un crédito al fabricante. 
- Si el monto total de la compra no excede de $500.000 
la empresa tendrá capacidad de invertir de su propio dinero un 70% 
y el restante 30% lo pagará solicitando crédito al fabricante.
El fabricante cobra por concepto de intereses un 20% sobre la cantidad que se le pague a crédito.*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float montototal,inversion,creditobanco,creditofabricante,interes,creditofabricantetotal,op;
	setlocale(LC_CTYPE, "Spanish");
	system("color 2F");
	printf("\n\t\t\tPor favor, ingresa el monto total de la compra ");
	scanf("%f",&montototal);
	if(montototal>500000)
	{
		system("cls");
		system("color A0");
		printf("\n\t\t\tEl monto total es mayor a $500,000 ");
		inversion=montototal*0.55;
		creditobanco=montototal*0.30;
		op=inversion+creditobanco;
		creditofabricante=montototal-op;
		interes=creditofabricante*0.20;
		creditofabricantetotal=creditofabricante+interes;
		printf("\n\t\t\tSe puede invertir %.0f ",inversion); puts("pesos, correspondiente al 55 porciento");
		printf("\n\t\t\tSe le puede solicitar al banco un crédito de %.0f ",creditobanco); puts("pesos, correspondiente al 30 porciento");
		printf("\n\t\t\tSe le puede solicitar al fabricante un crédito de %.0f ",creditofabricante); puts("pesos");
		printf("\n\t\t\tEl fabricante cobrará por concepto de interés %.0f ",interes); puts("pesos, correspondiente al 20 porciento");
		printf("\n\t\t\tEl total a pagar por el crédito concedido por el fabricantes es %.0f ",creditofabricantetotal); puts("pesos");
	}
	else
	{
		system("cls");
		system("color A0");
		printf("\n\t\t\tEl monto total es menor a $500,000 ");
		inversion=montototal*0.70;
		creditofabricante=montototal*0.30;
		op=inversion+creditobanco;
		creditofabricante=montototal-op;
		interes=creditofabricante*0.20;
		creditofabricantetotal=creditofabricante+interes;
		printf("\n\t\t\tSe puede invertir %.0f ",inversion); puts("pesos, correspondiente al 70 porciento");
		printf("\n\t\t\tSe le puede solicitar al fabricante un crédito de %.0f ",creditofabricante); puts("pesos, correspondiente al 30 porciento");
		printf("\n\t\t\tEl fabricante cobrará por concepto de interés %.0f ",interes); puts("pesos, correspondiente al 20 porciento");
		printf("\n\t\t\tEl total a pagar por el crédito concedido por el fabricantes es %.0f ",creditofabricantetotal); puts("pesos");
	}
}

