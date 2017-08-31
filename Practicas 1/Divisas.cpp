#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

float pesos, dolar, cambio;
main(){
	printf("dame los dolares\n");
	scanf("%f", & dolar);
	printf("dame el cambio actual\n");
	scanf("%f", & cambio);
	pesos=dolar*cambio;
	printf("La cantidad es:%.2f\n", pesos);
	system ("pause");
}
