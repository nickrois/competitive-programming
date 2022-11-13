#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  float R=0,C=0,S=0,vezes,num,total=0;
  char letra;
  scanf("%f",&vezes);
  for(int i=0;i<vezes;i++){
    scanf("%f %c", &num, &letra);
    total += num;
    if(letra == 'C')
      C += num;
    if(letra == 'R')
      R += num;
    if(letra == 'S')
      S += num;
  }
  printf("Total: %.0f cobaias\n",total);
  printf("Total de coelhos: %.0f\n",C);
  printf("Total de ratos: %.0f\n",R);
  printf("Total de sapos: %.0f\n",S);
  C = C/total*100;
  R = R/total*100;
  S = S/total*100;
  printf("Percentual de coelhos: %.2f %%\n",C);
  printf("Percentual de ratos: %.2f %%\n",R);
  printf("Percentual de sapos: %.2f %%\n",S);

  return 0;
}
