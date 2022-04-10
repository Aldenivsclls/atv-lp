#include <stdio.h>

int main(){
  int horas,min,seg;
  long int result_em_segundos;
    
  printf("\nDiga que horas, quantos minutos e quantos segundos são respectivamente: ");
  scanf("%d%d%d",&horas,&min,&seg);
    
  horas=60*60*horas;
  min=60*min;
    
  printf("O resultado em segundos é de %d \n",horas+min+seg);
    
  system("PAUSE");
    
}