//Leer tres números diferentes e imprimir el número mayor de los tres.
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int a,b,c;
	setlocale(LC_CTYPE, "Spanish");
	system("color 90");
	printf("\n\t\t\tIntroduzca primer número ");
	scanf(" %d",&a);
	printf("\n\t\t\tIntroduzca segundo número ");
	scanf(" %d",&b);
	printf("\n\t\t\tIntroduzca tercer número ");
	scanf(" %d",&c);
	if(a>b)
	{
		if(a>c)
		{
			system("color B0");
			printf("\n\t\t\tEl número %d ",a); puts(" es el mayor.");
		}
		else
		{
			system("color B0");
			printf("\n\t\t\tEl número %d ",c); puts(" es el mayor.");
		}
	}
	else
	{
		if(b>c)
		{
			system("color B0");
			printf("\n\t\t\tEl número %d",b); puts(" es el mayor.");
		}
		else
		{
			system("color B0");
			printf("\n\t\t\tEl número %d",c); puts(" es el mayor.");
		}
	}
}
