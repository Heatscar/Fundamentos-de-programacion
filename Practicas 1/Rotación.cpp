#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int a,b,c,aux;
main(){
	printf("Dame el valor de a:");
	scanf("%i",&a);
	printf("Dame el valor de b:");
	scanf("%i",&b);
	printf("Dame el valor de c:");
	scanf("%i",&c);
	aux=a;
    a=b;
    b=c;
    c=aux;
    printf("Los valores finales son:\nA toma el valor de B a:%i\n",a);
    printf("B toma el valor de C b:%i\n",b);
    printf("C toma el valor inicial de A a:%i\n",aux);
	system("pause");
}
