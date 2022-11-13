#include <stdio.h>

int main(){
  int X1,Y1,X2,Y2,N,X,Y,teste=1,hits=0;

  for(;;){
    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
    getchar();
    if(!X1&&!X2&&!Y1&&!Y2) break;

    scanf("%d",&N);
    getchar();
    for(int i=0;i<N;i++){
        scanf("%d %d",&X,&Y);
        if((Y2<=Y)&&(Y1>=Y)&&(X1<=X)&&(X2>=X))
          hits++;
    }
    printf("Teste %d\n%d\n",teste,hits);
    hits=0;
    teste++;
  }

  return 0;
}
