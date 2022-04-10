#include <stdio.h>

int main(){
 float conta;
 float comissao;

 printf("Informe o valor da conta: ");
 scanf("%f", &conta);

 comissao = conta / 10;

 printf("\nA comissao do garçom é R$: %.2f\n", comissao);
 printf("\nO total a ser pago é R$: %.2f", conta + comissao);

 return 0;
}