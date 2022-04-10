#include <stdio.h>

int main(){
 float F,C;


 puts("Digite a temperatura em Celsius:");
 scanf("%f", &C);
 F = (9 * C+160)/5;
 printf("A temperatura em Fahrenheit será de:\n %.1f ",F);

 return 0;
}
