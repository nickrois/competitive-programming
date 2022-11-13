#include <stdio.h>
#include <stdbool.h>

int main(){
  int B,N,D,C,V,i,res=false,reservas[25];

  for(;;){
    scanf("%d %d", &B, &N);
    if(!B && !N)
      break;

    for(i=0;i<B;i++)
      scanf("%d",&reservas[i]);

    for(i=0;i<N;i++){
      scanf("%d %d %d", &D, &C, &V);
      reservas[D-1] -= V;
      reservas[C-1] += V;
    }

    res = false;
    for(i=0;i<B;i++){
      if(reservas[i] < 0){
        res = true;
        break;
      }
    }

    if(res)
      printf("N\n");
    else
      printf("S\n");
  }
  return 0;
}
