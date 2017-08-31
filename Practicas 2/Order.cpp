#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int n1, n2, a, b;
int main(){
printf("Dame 2 valores separados por comas: \n"); 
scanf("%i,%i",&n1,&n2); 
	a=(n1>n2) ? n1:n2;
    b=(n1<n2) ? n1:n2;
	printf("Mayor:%i\nMenor:%i\n",a,b);
	system("pause");
}


