/*En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $1000 
¿Cuál será la cantidad que pagará una persona por su compra?*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float compras,descuento,total;
	setlocale(LC_ALL, "spanish");
	system("color 30");
	printf("\n\t\t\tPorfavor, ingrese la cantidad total de su compra ");
	scanf("%f",&compras);
	descuento=compras*0.20;
	total=compras-descuento;
	if(compras>1000)
	{
		system("color 80");
		printf("\n\t\t\tTu compra supera los 1000 pesos, tienes un descuento del 20 porciento en el total de tu compra");
		printf("\n\t\t\tPagarás %.0f ",total); puts("pesos");
	}
	else
	{
		system("color 80");
		printf("\n\t\t\tPagarás %.0f ",compras); puts("pesos");
	}
}
