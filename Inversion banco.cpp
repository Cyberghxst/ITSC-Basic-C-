/*Suponga que un individuo desea invertir su capital en un banco 
y desea saber cu�nto dinero ganar� despu�s de un mes si el banco paga a raz�n de 2% mensual.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int inversion,inc,total;
	setlocale(LC_ALL, "spanish");
	system("color 30");
    printf("Introduzca la cantidad que quiere invertir ");
    scanf("%d", &inversion);
    inc=inversion*0.02;
    system("cls");
    system("color 20");
    printf("\n\n\n\t\t\tMensualmente tu dinero aumentar� %d \n\n\n\n", inc);
	return 0;
	}
