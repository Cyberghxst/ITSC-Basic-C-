/*Un hombre desea saber cuánto dinero se genera por concepto de intereses 
sobre la cantidad que tiene en inversión en el banco. 
Decidirá reinvertir los intereses siempre y cuando éstos excedan a $7000, 
y en ese caso desea saber cuánto dinero tendrá finalmente en su cuenta.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float inv,tasa,interes,total; //inv=inversion
	system("color F0");
	printf("\n\n\tIngrese la cantidad a invertir ");
	scanf("%f",&inv);
	printf("\n\n\tIngrese la tasa de interes ");
	scanf("%f",&tasa);
	interes=inv*tasa;
	total=inv+interes;
	if(interes>7000)
	{
	    system("cls");
	    system("color A0");
		printf("\n\n\tLa cantidad generada por intereses es: %.0f ",interes); puts(",superan los 7000 pesos");
		printf("\n\n\tEl saldo generado en la cuenta es: %.0f ", total); puts("pesos");
	}
	else
	{
	    system("cls");
	    system("color A0");
		printf("\n\n\tLa cantidad generada por intereses es: %.0f ", interes); puts(", no superan los 7000 pesos");
		printf("\n\n\tEl saldo generado en la cuenta es: %.0f ", inv); puts("pesos");
	}
}
