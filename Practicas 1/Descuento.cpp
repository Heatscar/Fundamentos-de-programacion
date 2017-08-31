#include<iostream>
	
float d,t,r;
main(){
	printf("Total del producto:\n");
	scanf("%f",&t);
	printf("El descuento es de:");
	scanf("%f",&d);
	r=t*d/100;
	r=t-r;
	printf("El total con descuento es: %.2f\n",r);
	system("pause");
}
