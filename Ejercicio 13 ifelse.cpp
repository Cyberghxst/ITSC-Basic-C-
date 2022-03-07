/*Las raíces de un polinomio de segundo grado (x1 y x2) 
expresado como P(x)= ax+ bx+ c  se obtienen mediante la fórmula siguiente:
x=(-b+-sqrtb^2-4ac)/2a
De forma que se dan tres posibilidades en las que: 
- Si el contenido de la raíz es mayor que 0, las raíces son reales y distintas. 
- Si el contenido de la raíz es igual a cero, las raíces son reales e iguales. 
- Si el contenido de la raíz es menor que 0, las raíces son imaginarias. 
Escriba el programa para determinar el tipo de raíces de un polinomio de segundo grado 
chequeando cuál de estas tres posibilidades es la que se cumple.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<math.h>
int main(){
	float x1,x2;
	int a,b,c,d;
	setlocale(LC_ALL, "spanish");
	system("color 30");
	printf("\n\t\t\tTomando en cuenta la ecuación general, ingrese el valor de a ");
	scanf(" %d", &a);
	printf("\n\t\t\tAhora, ingrese el valor de b ");
	scanf(" %d", &b);
	printf("\n\t\t\tAhora, ingrese el valor de c ");
	scanf(" %d", &c);
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	if(d>0)
	{
		system("color 80");
		printf("\n\t\t\tLas raíces son reales y distintas");
		printf("\n\t\t\tX1= %.1f ",x1);
		printf("\n\t\t\tX2= %.1f ",x2);
	}
	else
	{
	}
	if(d==0)
	{
		system("color 80");
		printf("\n\t\t\tLas raíces son reales e iguales");
		printf("\n\t\t\tX1= %.1f ",x1);
		printf("\n\t\t\tX2= %.1f ",x2);
	}
	else
	{
	}
	if(d<0)
	{
		system("color 80");
		printf("\n\t\t\tLas raíces son imaginarias");
		printf("\n\t\t\tX1= %.1f ",x1);
		printf("\n\t\t\tX2= %.1f ",x2);
	}
}
