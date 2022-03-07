/*Determinar si un alumno aprueba o reprueba un curso, 
sabiendo que aprobará si su promedio de tres calificaciones es mayor o igual a 70; 
en caso contrario reprueba.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int p1,p2,p3,calificacion,promediogeneral;
	setlocale(LC_ALL, "spanish");
	system("color F0");
	printf("\n\n\n\t\t\tIngresa el promedio de la primer materia ");
	scanf("%d", &p1);
	printf("\n\n\n\t\t\tIngresa el promedio de la segunda materia ");
	scanf("%d", &p2);
	printf("\n\n\n\t\t\tIngresa el promedio de la tercer materia ");
	scanf("%d", &p3);
	promediogeneral=(p1+p2+p3)/3;
	system("cls");
	if (promediogeneral>=70)
	{		
	system("color A0");
	printf("\n\n\n\t\t\t¡Felicidades! Aprobaste con %d \n\n\n\t\t\t", promediogeneral);
	}
	else
	{
	system("color 40");
	printf("\n\n\n\t\t\t¡Rayos! Tu calificación es %d \n\n\n\t\t\t", promediogeneral);	
	}
}
