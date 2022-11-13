#include <stdio.h>
#include <math.h>

int main(){
  long long unsigned int graos;
  int vezes, quant;

  scanf("%d",&vezes);
  getchar();
  while(vezes--){
    scanf("%d",&quant);
    getchar();

    graos=1;
    quant--;
    while(quant--)
      graos *= 2;

    graos = graos/6000;

    printf("%llu kg\n",graos);

  }




  return 0;
}
