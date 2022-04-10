#include <stdio.h>

int main() {
  int num;
  printf("Digite um valor inteiro:");
  scanf("%d", &num);
  printf("\nHexadecimal: %X\n", num);
  printf("\nOctal: %o", num);

  return 0;
}