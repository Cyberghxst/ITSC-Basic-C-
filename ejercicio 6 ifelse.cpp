/*Una persona enferma, que pesa 70 Kg., 
se encuentra en reposo y desea saber cuántas calorías consume su cuerpo durante todo el tiempo que realice una misma actividad. 
Las actividades que tiene permitido realizar son únicamente dormir o estar sentado en reposo. 
Los datos que tiene son que estando dormido consume 
1,08 calorías por minuto y estando sentado en reposo consume 1,66 calorías por minuto.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float kcl,tiempo,consumo,actividad;
	setlocale(LC_ALL, "spanish");
	system("color B0");
	printf("\n\t\t\t1) Dormir ");
	printf("\n\t\t\t2) Sentado en reposo ");
	printf("\n\t\t\tPorfavor, indique que actividad va a realizar ");
	scanf("%f",&actividad);
	if(actividad==1)
	{
		printf("\n\t\t\tHa seleccionado: Dormir ");
		printf("\n\t\t\tIndique en minutos el tiempo de esta actividad ");
		scanf("%f",&tiempo);
		consumo=1.08*tiempo;
		system("cls");
		system("color 90");
		printf("\n\t\t\tEl consumo de calorías al hacer esta actividad es de %.2f ",consumo); puts("KCl");
	}
	else
	if(actividad==2)
	{
		printf("\n\t\t\tHa seleccionado: Sentado en reposo ");
		printf("\n\t\t\tIndique en minutos el tiempo de esta actividad ");
		scanf("%f",&tiempo);
		consumo=1.66*tiempo;
		system("cls");
		system("color 90");
		printf("\n\t\t\tEl consumo de calorías al hacer esta actividad es de %.2f ",consumo); puts("KCl");
	}
	else
	{
		system("cls");
	    system("color 40");
	    printf("\n\t\t\tOpción no válida. ");
	}	
}
