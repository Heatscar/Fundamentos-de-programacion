#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

float r,a,p,pi=3.1416;
main(){
	printf ("dame el radio\n");
	scanf ("%f", &r);
	p=2*pi*r;
	a=pi*r*r;
	printf ("el perimetro y area son: %.4f %.4f\n",p,a);
	system ("pause");
}
