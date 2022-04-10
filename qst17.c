#include <stdio.h>
#include <stdlib.h>

int main(){
 int valor;
  
 puts("\nDigite um valor inteiro: ");
 scanf("%d", &valor);
 printf("\nO valor absoluto de %d é = %d\n.",valor, abs(valor));

  return 0;
}