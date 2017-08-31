#include<cstdio>	
int p,t,c;
int m=0, q=0, d=0, cien=0, cin=0, v=0, diez=0, cinco=0, dos=0, uno=0;
main(){
	printf("Total de la compra:\n");
	scanf("%i",&t);
	printf("Con cuanto se paga:\n");
	scanf("%i",&p);
	if(t<=p){
	c=p-t;
	printf("El cambio es: %i\n",c);
	if(c>=1000){
    m=c/1000;
    c=c%1000;}
	  if(c>=500){q=c/500;
      c=c%500;}
	    if(c>=200){d=c/200;
        c=c%200;}
	     if(c>=100){cien=c/100;
         c=c%100;}
	      if(c>=50){cin=c/50;
          c=c%50;}
	       if(c>=20){v=c/20;
           c=c%20;}
	        if(c>=10){diez=c/10;
            c=c%10;}
	         if(c>=5){cinco=c/5;
             c=c%5;}
	          if(c>=2){dos=c/2;
              c=c%2;}
	           if(c>=1){uno=c/1;
               c=c%1;}
    
	printf("Denom\t n\n");
	if(m>0){printf("1000     %i\n", m);}
	if(q>0){printf("500      %i\n", q);}
	if(d>0){printf("200      %i\n", d);}
	if(cien>0){printf("100      %i\n", cien);}
	if(cin>0){printf("50       %i\n", cin);}
	if(v>0){printf("20       %i\n", v);}
	if(diez>0){printf("10        %i\n", diez);}
	if(cinco>0){printf("5        %i\n", cinco);}
	if(dos>0){printf("2        %i\n", dos);}
	if(uno>0){printf("1        %i\n", uno);}
}
	else{
	printf("La cantidad no es suficiente\n");
	}
	return(0);
}
