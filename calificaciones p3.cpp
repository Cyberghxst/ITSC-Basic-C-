/*Un alumno desea saber cu�l ser� su calificaci�n final en la materia de Algoritmos. 
Dicha calificaci�n se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificaci�n del examen final. 
15% de la calificaci�n de un trabajo final.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float parcial1,parcial2,parcial3,promgenparcial,examfinal,trabajofinal,calificacionexamfinal,calificaciontrabajofinal,promediogeneral;
	setlocale(LC_ALL, "spanish");
	system("color F0");
	printf("\n\n\n\t\t\tIngresa la calificaci�n del primer parcial ");
	scanf("%f", &parcial1);
	printf("\n\n\n\t\t\tIngresa la calificaci�n del segundo parcial ");
	scanf("%f", &parcial2);
	printf("\n\n\n\t\t\tIngresa la calificaci�n del tercer parcial ");
	scanf("%f", &parcial3);
	printf("\n\n\n\t\t\tIngresa la calificaci�n de tu examen final ");
	scanf("%f", &examfinal);
	printf("\n\n\n\t\t\tIngresa la calificaci�n de tu trabajo final ");
	scanf("%f", &trabajofinal);
	promgenparcial=((parcial1+parcial2+parcial3)/3)*0.55;
	calificacionexamfinal=examfinal*0.30;
	calificaciontrabajofinal=trabajofinal*0.15;
	promediogeneral=promgenparcial+calificacionexamfinal+calificaciontrabajofinal;
	system("cls");
	if (promediogeneral>7)
	{		
	system("color A0");
	printf("\n\n\n\t\t\t�Felicidades! Aprobaste con %.1f \n\n\n\t\t\t", promediogeneral);
	}
	else
	{
	system("color 40");
	printf("\n\n\n\t\t\t�Rayos! Tu calificaci�n es %.1f \n\n\n\t\t\t", promediogeneral);	
	}
	
}

