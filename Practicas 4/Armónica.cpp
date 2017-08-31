#include <cstdio>
int num;
float x,res;
main(){ 
printf("Dame un numero:\n");
	scanf("%i",&num);
		for(x=1;x<=num;x++){ 
		res=res+(1.0/x); 
		//printf("1/%.4f\n",x);
		}
		printf("Resultado:%.4f\n",res); 
}
