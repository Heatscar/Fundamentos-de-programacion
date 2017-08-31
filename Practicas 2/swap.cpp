#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int x,y;
int main() {
printf("Ingrese 2 numeros enteros separados por comas: "); 	
scanf("%i,%i",&x,&y);
x = x + y;
y = x - y;
x = x - y;
printf("El valor de x es:%i\n",x);
printf("El valor de y es:%i\n",y);
system("pause");
}
