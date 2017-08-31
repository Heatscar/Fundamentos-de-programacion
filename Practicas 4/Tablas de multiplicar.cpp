#include <cstdio>
int f,c,t;
main(){
	printf("      1    2    3    4    5    6    7    8    9   10\n----------------------------------------------------\n");
	for(f=1; f<=10; f++){
		printf("%2i:",f);
		for(c=1; c<=10; c++){
			t=f*c;
			printf("%4i ",t);
			if(t<10){
			}
		}
		printf("\n");
	}
	return(0);
}
