#include <cstdio>
#include <cstdlib>
#include <ctime>
main(){
	srand(time(NULL));
	for(int i=0;i<100;i++){
	int x= rand() % 101/*numero rango*/;
	printf("%i\n",x);
}
	return(0);
}
