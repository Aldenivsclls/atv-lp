#include <stdio.h>

int main(){
 int A,B,C;
 printf("O valor de A: ");
 scanf("%d",&A);
 printf("O valor de B: ");
 scanf("%d",&B);
 C = A;
 A = B;
 B = C;

 printf("\nValor de A = %d, B = %d\n.",A,B);

 return 0;
}