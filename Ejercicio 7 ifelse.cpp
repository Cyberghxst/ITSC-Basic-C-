/*Hacer un programa que imprima el nombre de un artículo, clave, precio original y su precio con descuento. 
El descuento lo hace en base a la clave, 
Si la clave es 01 el descuento es del 10% y si la clave es 02 el descuento en del 20% (sólo existen dos claves).*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main ()
{
	char articulo[30];
	float descuento,total;
	int precio,clave;
	system("color F0");
	setlocale(LC_CTYPE, "Spanish");
	printf("\n\t\t\tIngresa el nombre del artículo: ");
	gets(articulo);
	printf("\n\t\t\tIngresa el precio del producto: ");
	scanf("%d",&precio);
	printf("\n\t\t\tIngresa una clave para obtener un descuento: ");
	scanf("%d",&clave);
	
	if(clave==1)
	{
		descuento=(precio*0.10);
		total=precio-descuento;
		system("cls");
		system("color A0");
		printf("\n\t\t\tProducto: "); puts(articulo);
		printf("\n\t\t\tPrecio original: %d ",precio); puts("pesos");
		printf("\t\t\tDescuento: %.2f ",descuento); puts("pesos");
		printf("\n\t\t\tEl precio del producto es de: %.2f ",total); puts("pesos");
	}
	else
	if(clave==2)
	{
		descuento=(precio*0.20);
		total=precio-descuento;
		system("cls");
		system("color A0");
		printf("\n\t\t\tProducto: "); puts(articulo);
		printf("\n\t\t\tPrecio original: %d ",precio); puts("pesos");
		printf("\t\t\tDescuento: %.2f ",descuento); puts("pesos");
	    printf("\n\t\t\tEl precio del producto es de: %.2f ",total); puts("pesos");
	}
	else
	{
		system("cls");
	    system("color 40");
	    printf("\n\t\t\tOpción no válida... ");
	    printf("\n\t\t\tPorfavor, inténtelo de nuevo. ");
	}
}
