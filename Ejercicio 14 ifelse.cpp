/*Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume.*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float num1,num2,suma,resta,multi;
	setlocale(LC_CTYPE, "Spanish");
	system("color 5F");
	printf("\n\t\t\tIntroduzca el primer número ");
	scanf("%f",&num1);
	printf("\n\t\t\tIntroduzca el segundo número ");
	scanf("%f",&num2);
	if(num1==num2)
	{
		multi=num1*num2;
		system("cls");
		system("color B0");
		printf("\n\t\t\tMultiplicación = %.0f ",multi);
	}
	else
	if(num1>num2)
	{
		resta=num1-num2;
		system("cls");
		system("color B0");
		printf("\n\t\t\tResta = %.0f ",resta);
	}
	else
	{
		suma=num1+num2;
		system("cls");
		system("color B0");
		printf("\n\t\t\tSuma = %.0f ",suma);
	}
}
