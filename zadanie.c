#include <stdio.h>
#include <math.h>
int main(){

int choice;
float a, b, c, r, e, d;
float pi=3.14;

printf("Opliczyc pole kola(1) czy prostokata(2)?:\n");
scanf("%d", &choice);

if (choice==1){

printf("Podaj dlugosc boku a:\n");
scanf("%f", &a);

printf("Podaj dlugosc boku b:\n");
scanf("%f", &b);

c = a*b;

printf("Pole prostokata wynosi: %f\n", c);
}
else if (choice==2){

printf("Podaj promien kola r:\n");
scanf("%f", &r);

d = pi*(r*r);

printf("Pole kola wynosi: %f", d);
}
else{
    printf("Nieprawid³owa wartoœæ");
}
return 0;
}
