#include<cstdio>
int anio;
main() {
	printf("Dame el anio\n");
    scanf("%i",&anio);
	if ((anio%400==0 || anio%100!=0) && anio%4==0)
	printf("El anio: %i es bisiesto",anio);
	else
	printf("El anio no es bisiesto");
    return 0;
}
