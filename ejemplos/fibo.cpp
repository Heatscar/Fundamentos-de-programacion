#include <cstdio>
int fibo(int i) {
if (i==1 || i==2) return 1;
return fibo (i-1) + fibo(i-2);
}
int main(){
for (int i=1; i < 21; i++)
printf("f%i : %i\n",i, fibo(i));
return 0;
}

