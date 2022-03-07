/*Un obrero necesita calcular su salario semanal, que se obtiene de la siguiente forma: 
Si trabaja 40 horas o menos se le paga $16 por hora 
Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 
por cada hora extra.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int salario,horastrabajototal,horasextra,salarioextra,horastrabajo,salariototal,salarionormal;
	system("color 10");
	printf("\n\t\t\tPorfavor indique cuantas horas trabajo ");
	scanf("%d",&horastrabajototal);
	horasextra=horastrabajototal-40;
	horastrabajo=horastrabajototal-horasextra;
	salarionormal=16*horastrabajototal;
	salario=16*horastrabajo;
	salarioextra=20*horasextra;
	salariototal=salario+salarioextra;
	if(horastrabajototal>40)
	{
		system("color E0");
		printf("\n\t\t\tLas horas que trabajaste son %d ",horastrabajo); puts("horas");
		printf("\n\t\t\tLas horas extra que trabajaste son %d ",horasextra); puts("horas");
		printf("\n\t\t\tPor horas trabajadas se te paga %d ",salario); puts("pesos");
		printf("\n\t\t\tPor horas extras trabajadas se te paga %d ",salarioextra); puts("pesos");
		printf("\n\t\t\tEn total se te paga %d ",salariototal); puts("pesos");
	}
	else
	{
		system("color E0");
		printf("\n\t\t\tLas horas que trabajaste son %d ",horastrabajototal); puts("horas");
		printf("\n\t\t\tEn total se te paga %d ",salarionormal); puts("pesos");
	}
}
