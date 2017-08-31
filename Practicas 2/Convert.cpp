#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
float a,a1,a2,a3,a4;
int main() {
	printf("Cantidad en pies:"); 
	scanf("%f",&a); 
	a1=a*12; 
	a2=a/3; 
	a3=a1*2.54; 
	a4=a3/100;
	printf("Equivalente en pulgadas: %.4f\nyardas: %.4f\ncentimetros: %.4f\nmetros: %.4f\n",a1,a2,a3,a4); 
	
system("pause");
}

