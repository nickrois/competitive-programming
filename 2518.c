#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
  int N,H,C,L;
  double area;

    while(scanf("%d",&N)!=EOF){
      getchar();
      scanf("%d %d %d",&H,&C,&L);
      getchar();

      area=sqrt(pow(H,2)+pow(C,2))*L*N;
      area /= 10000;

      printf("%.4lf\n",area);
    }

  return 0;
}
