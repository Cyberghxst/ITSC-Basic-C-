/*Hacer un programa que lea los datos que contiene una referencia bibliogr�fica (nombre del libro, editorial, autores, edici�n,
n�mero de p�ginas), despu�s de leerlos mostrarlos en pantalla identificando cada uno de los datos, y d�ndole una salida formateada en pantalla
Mostrar un color de fondo y texto para las entradas y otros colores diferentes de fondo y texto para las salidas.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	char nombrelibro[50];
	char editorial[30];
	char autores[150];
	char edicion[20];
	char nopaginas[5];
	setlocale(LC_ALL, "spanish");
	system("color F0");
	printf("\n\t\t\t\tIntroduce el nombre del libro: ");
	gets(nombrelibro);
	printf("\n\t\t\t\tEscribe la editorial del libro: ");
	gets(editorial);
	printf("\n\t\t\t\tIntroduce el (o los) autore(s) del libro: ");
	gets(autores);
	printf("\n\t\t\t\tEscribe la edici�n correspondiente del libro: ");
	gets(edicion);
	printf("\n\t\t\t\tEscribe el n�mero de p�ginas que posee el libro: ");
	gets(nopaginas);
	system("cls");
	system("color 4F");
	printf("\n\n\t\t\t\t\tLos datos del libro son: ");
	printf("\n\n\n\t\t\t\tNOMBRE DEL LIBRO: ");
	puts(nombrelibro);
	printf("\n\t\t\t\tEDITORIAL DEL LIBRO: ");
	puts(editorial);
	printf("\n\t\t\t\tAUTOR(ES) DEL LIBRO: ");
	puts(autores);
	printf("\n\t\t\t\tEDICI�N DEL LIBRO: ");
	puts(edicion);
	printf("\n\t\t\t\tN�MERO DE P�GINAS QUE CONTIENE EL LIBRO: ");
	puts(nopaginas);
}
