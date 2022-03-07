/*Una compañía de seguros está abriendo un departamento de finanzas y estableció un programa para captar clientes, 
que consiste en lo siguiente: si el monto por el que se efectúa la póliza es menor que $50.000 la cuota a pagar será por el 3% del monto, 
y si el monto es mayor que $50.000 la cuota a pagar será el 2% del monto. 
La compañía desea determinar cuál será la cuota que debe pagar un cliente.*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float monto,pago;
	setlocale(LC_CTYPE, "Spanish");
	system("color 5F");
	printf("\n\t\t\tIntrduzca el monto de la póliza ");
	scanf("%f",&monto);
	if(monto>50000)
	{
		pago=monto*0.02;
		system("cls");
		system("color 10");
		printf("\n\t\t\tLa cuota por pagar del cliente es %.0f ",pago); puts("correspondiente al 2 porciento.");
	}
	else
	{
		pago=monto*0.03;
		system("cls");
		system("color 10");
		printf("\n\t\t\tLa cuota por pagar del cliente es %.0f ",pago); puts("correspondiente al 3 porciento.");
	}
}
