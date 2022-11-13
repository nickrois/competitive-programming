#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int A,D,C,J,cont=0,maiorD1=10000,maiorD2=10000;
    bool Y=false;

    for(;;){
      scanf("%d %d",&A,&D);
      getchar();
      if((!A)&&(!D)) break;
      int att[A];
      int def[D];
      maiorD1 = 10000;
      maiorD2 = 10000;

      for(int i=0;i<A;i++){
        scanf("%d",&att[i]);
        getchar();
      }
      for(int j=0;j<D;j++){
        scanf("%d",&def[j]);
        getchar();
        if(def[j]<=maiorD1){
          maiorD2 = maiorD1;
          maiorD1 = def[j];
        }
        if((def[j]<maiorD2)&&(def[j]>maiorD1))
          maiorD2 = def[j];
      }

      for(int i=0;i<A;i++){
        if(att[i]<maiorD2) cont++;

        if(cont>=1) Y=true;

        cont=0;
      }

      if(Y) printf("Y\n");
      else printf("N\n");

      Y=false;
    }
    return 0;
}
