#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a,b,c,d,e,f,n,x;
int main() {
printf("Dame el a\xA4o: "); 	
scanf("%i",&x);
a=x % 19;
b=x % 4;
c=x % 7;
d=(19*a + 24)% 30;
e=(2*b + 4*c + 6*d + 5)% 7;
n=22+d+e;
(n>31) ? printf("En %i el domingo de pascua es el dia %i de abril\n",x,n-31) : printf("En %i el domingo de pascua es el dia%i\n",x,n); 
system("pause");
}
