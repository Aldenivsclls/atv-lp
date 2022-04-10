#include <stdio.h>
int main(){

int numA, numB;
printf("Informe o primeiro número inteiro:\n");
scanf("%d",&numA);

printf("Informe o segundo número inteiro:\n");
scanf("%d",&numB);
printf("O primeiro valor %s\n",(numA % numB ==0 ? "é multiplo do segundo":"não é multiplo do segundo"));

 return 0;
} 