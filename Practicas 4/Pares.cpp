#include<cstdio>
int p;
main(){
	printf("Introduce un numero\n");
	do{
    scanf("%i",&p);
    if(p%2==0&&p!=0){
    printf("Par\n");
    }
	}
	while(p>0);
return (0);
}
