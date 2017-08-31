#include<iostream>
	
float p,t,r;
main(){
	printf("Total de la compra:\n");
	scanf("%f",&t);
	printf("Con cuanto se paga:\n");
	scanf("%f",&p);
	r=p-t;
	printf("El total es: %.2f\n",r);
	system("pause");
}
