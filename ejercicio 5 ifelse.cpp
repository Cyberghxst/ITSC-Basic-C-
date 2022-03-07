//Leer dos números e imprimirlos en forma ascendente.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int numero1,numero2;
	printf("\n\t\t\tIngrese el primer numero ");
	scanf("%d",&numero1);
	printf("\n\t\t\tIngrese el segundo numero ");
	scanf("%d",&numero2);
	if(numero1<numero2)
	{
		printf("\n\t\t\tOrden ascendente %d ",numero1); printf("--> %d ",numero2);
	}
	else
	{
		printf("\n\t\t\tOrden ascendente %d ",numero2); printf("--> %d ",numero1);
	}
}
