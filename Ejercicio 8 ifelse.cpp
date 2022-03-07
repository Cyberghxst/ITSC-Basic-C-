/*Hacer un programa que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o más 
se aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un descuento del 10% */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float precio,descuento,total,desctotal;
	int piezas;
	setlocale(LC_ALL, "spanish");
	system("color 10");
	printf("\n\t\tPorfavor, introduzca cuantas camisas está comprando ");
	scanf("%d", &piezas);
	printf("\n\t\tPorfavor, introduzca el precio de las camisas ");
	scanf("%f", &precio);
	if (piezas>2)
	{		
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagarás %.2f ",desctotal);
	}
	else
	if (piezas<3)
	{
	total=precio*piezas;
	descuento=total*0.10;
	desctotal=total-descuento;
	system("color A0");
	printf("\n\n\n\t\t\tPagarás %.2f ",desctotal);	
	}
}
