#include <stdio.h>
#include <stdlib.h>

int main(){
  int x1,y1,x2,y2;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  while(x1 && x2 && y1 && y2){
    if(x1==x2 && y1==y2) //caso mesma pos
      printf("0\n");
    else if(abs(x2-x1) == abs(y2-y1)) //caso diagonal
      printf("1\n");
    else if(x1==x2 || y1==y2) //caso mesma linha
      printf("1\n");
    else
      printf("2\n"); //caso qualquer

    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  }
  return 0;
}
