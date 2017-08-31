#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int array[5],prom,e;
float prom2;
main(){
	printf("introducir las edades:\n");
	for(e=0;e<5;e++){
	scanf("%i", &array[e]);
	prom+= array[e];
	}
	prom2 = prom/5;
	printf("resultado es: %.1f\n", prom2);
	system ("pause");		
}
