#include <stdio.h>

int main(){
 int numA, numB;
 int soma,produto,difer,quoci,resto;
 
 printf("Digite o primeiro numero numA:\n");
 scanf("%d",&numA);
 printf("Digite o segundo numero numB:\n");
 scanf("%d", &numB);
 soma = numA + numB;
 produto = numA * numB;
 difer = numA - numB;
 quoci = numA / numB;
 resto = numA % numB;
 printf("O resultado das operacoes sera:\n soma = %d\n produto = %d\n diferenca = %d\n quociente = %d\n resto = %d.\n",soma,produto,difer,quoci,resto);

 return 0;
}