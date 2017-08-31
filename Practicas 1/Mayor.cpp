#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int n1,n2;
int main() {  
printf("Ingrese el 1 numero: "); 
scanf ("%i,%i",&n1,&n2); 
n1>n2 ? printf("El numero mayor es:%i\n El numero menor es:%i\n",n1,n2) : printf("El numero mayor es:%i El numero menor es:%i\n",n2,n1);	
return 0; 
}
