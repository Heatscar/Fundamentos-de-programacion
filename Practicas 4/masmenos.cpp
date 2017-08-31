#include <cstdio>
#include <ctime> 
#include <cstdlib>
int N= 100, M=0, numero, input=100, intentos=0;
int main(){
    srand(time(0));
    numero = rand () % (N-M+1) + M;
	while (intentos <= 5){
		if(numero != input){
		printf ("Ingrese un nuevo numero:\t");
			scanf ("%i", &input);
			intentos++;
			if (intentos <= 5){
            if (input <= numero){
                printf ("Mas!!\n");
            }
            else if (input >= numero){
                printf ("Menos!!\n");
            }
			}
				else if (numero != input)printf ("Perdiste\n\nEl numero era:%i\n", numero);
			}
			}
			if (numero==input){
				printf ("FELICITACIONES !!, lo has logrado en %i intentos!!\n", intentos);}
    return 0;
}
