#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main(){
    int L,C,R1,R2;
    float H;

    for(;;){
      scanf("%d %d %d %d",&L,&C,&R1,&R2);
      getchar();
      if((!L)&&(!C)&&(!R1)&&(!R2)) break;

      H = sqrt(pow(L-R1-R2,2.0)+pow(C-R1-R2,2.0));
      if(((R1+R2)<=H)&&((R1*2)<=C)&&((R2*2)<=C)&&((R1*2)<=L)&&((R2*2)<=L))
        printf("S\n");
      else
        printf("N\n");


    }
    return 0;
}
