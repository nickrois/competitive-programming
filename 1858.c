#include <stdio.h>

int main(){
  int n,tort,tx,resposta;
  scanf("%d",&n);
  tort = 20;
  for(int i=0;i<n;i++){
    scanf("%d",&tx);
    if(tx<tort){
      tort = tx;
      resposta = i + 1;
    }
  }
  printf("%d\n",resposta);
  resposta = 0;

  return 0;
}
