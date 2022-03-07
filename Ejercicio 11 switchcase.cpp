/*Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aeróbico; 
la fórmula que se aplica cuando el sexo es femenino es: 
num. pulsaciones=(220 - edad)/10 
y si el sexo es masculino: 
num. pulsaciones=(210 - edad)/10*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float pulsaciones,edad;
	int sexo;
	setlocale(LC_CTYPE, "Spanish");
	system("color B0");
	printf("\n\t\t\tPorfavor, indica tu edad ");
	scanf("%f",&edad);
	printf("\n\t\t\tPorfavor, indica tu sexo ");
	printf("\n\t\t\t1 para mujer, o 2 para hombre ");
	scanf("%d", &sexo);
	switch(sexo)
	{
		case 1:
			pulsaciones=(220-edad)/10;
			system("cls");
			system("color 90");
			printf("\n\t\t\tEl número de pulsaciones por cada 10 segundos de ejercicio es %.1f ",pulsaciones); puts("BPM.");
		break;
		case 2:
			pulsaciones=(210-edad)/10;
			system("cls");
			system("color 90");
			printf("\n\t\t\tEl número de pulsaciones por cada 10 segundos de ejercicio es %.1f ",pulsaciones); puts("BPM.");
		break;
		default:
			system("cls");
			system("color 40");
			printf("\n\t\t\tOpción inválida.");
	}
}
