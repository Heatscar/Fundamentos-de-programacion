#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a,b,c,d,e,f;
float x,y;
int main() {
printf("Ingrese 3 numeros enteros separados por comas: "); 	
scanf("%i,%i,%i",&a,&b,&c);
printf("Ingrese 3 numeros enteros separados por comas: "); 	
scanf("%i,%i,%i",&d,&e,&f);
x=(c*e-e*f)/(a*e-b*d);
y=(a*f-c*d)/(a*e-b*d);
printf("El valor de x es:%.2f\n",x);
printf("El valor de y es:%.2f\n",y);
system("pause");
}
