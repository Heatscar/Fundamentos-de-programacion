#include <cstdio>
float x;
int main(){
	printf("Dame el numero\n");
	scanf("%f",&x);
	int y = (int)(x + 0.5);
	printf("El numero es: %i\n",y);
	return(0);
}
