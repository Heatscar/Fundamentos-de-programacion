#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int n1,n2,n3,n4,n5,res;
main(){
	printf("introducir numero\n");
	scanf ("%i",& n1);
	printf("introducir numero\n");
	scanf ("%i",& n2);
	printf("introducir numero\n");
	scanf ("%i",& n3);
	printf("introducir numero\n");
	scanf ("%i",& n4);
	printf("introducir numero\n");
	scanf ("%i",& n5);
	res=(n1+n2+n3+n4+n5)/5;
	printf("resultado es: %i\n", res);
	system ("pause");		
}
