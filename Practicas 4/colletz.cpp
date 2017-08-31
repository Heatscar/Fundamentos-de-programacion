#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int n;
int main(){
	printf("Dame un numero\n");
	scanf("%i",&n); 
	while (n>1){
		printf("%i ",n);
		if (n%2==1){
			n=3*n+1;
		}
		else
		n=n/2;
		}
		printf(" %i Converge!",n); 
return 0; 
}
