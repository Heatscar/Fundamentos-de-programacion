#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

float pago,horas,sub,neto;
main(){
	printf("Cual es el pago por hora?\n");
	scanf("%f", & pago);
	printf("Cuantas horas trabajo\n");
	scanf("%f", & horas);
	sub=horas*pago;
	neto=sub*24/100;
	neto=sub-neto;
	printf("El salario neto es:$%.2f\n",neto);
	system ("pause");
}
