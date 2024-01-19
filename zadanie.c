#include <stdio.h>
#include <math.h>
int main(){
float a, b, c, r;
float pi=3.14;
float d;
printf("Podaj dlugosc boku a:\n");
scanf("%f", &a);

printf("Podaj dlugosc boku b:\n");
scanf("%f", &b);

c = a*b;
printf("Pole prostokata wynosi: %f\n", c);

printf("Podaj promien kola r:\n");
scanf("%f", &r);

d = pi*(r*r);
printf("Pole kola wynosi: %f", d);

return 0;





}
