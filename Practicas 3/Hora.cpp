#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int hora,hora12,min; 
main(){
	printf("Dame la hora y minutos: \n");
	scanf("%i:%i",&hora,&min);
	if (hora<12&& hora==0){
		hora=hora+12;
		printf("la hora es: %02i:%02i AM\n",hora,min);
	}
	if (hora=12&&hora>0){
		printf("la hora es: %02i:%02i PM\n",hora,min);
	}
	else if (hora<24&& min<60){
	hora12=hora-12;
	printf("La hora es: %02i:%02i PM\n",hora12,min);
	}
	else
	printf("La hora es erronea");
    return(0);
}
