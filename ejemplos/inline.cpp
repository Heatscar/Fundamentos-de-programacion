#include <cstdio>
inline void inc(int &i){
	++i;} //es lo que se sustituye en inc(i)) de la linea 6
inline int select (int a, int b) { 
return a>b ? a:b;} //es lo que se sustituye en select (48,87) de la linea 11
main(){
	
	for (int i=0; i<10; inc(i)){
		printf("Hola mundo\n");
	}
	printf("%i\n", select (48,87));
	return 0;
}
