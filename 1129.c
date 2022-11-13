#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int A,B,C,D,E,n=1,i;

    while(scanf("%d",&n)){
      if(n==0)
        break;
      for(i=0;i<n;i++){
          scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
          if((A<=127)&&(B>127)&&(C>127)&&(D>127)&&(E>127))
            printf("A\n");
          else if((A>127)&&(B<=127)&&(C>127)&&(D>127)&&(E>127))
            printf("B\n");
          else if((A>127)&&(B>127)&&(C<=127)&&(D>127)&&(E>127))
            printf("C\n");
          else if((A>127)&&(B>127)&&(C>127)&&(D<=127)&&(E>127))
            printf("D\n");
          else if((A>127)&&(B>127)&&(C>127)&&(D>127)&&(E<=127))
            printf("E\n");
          else
            printf("*\n");
      }
    }
    return 0;
}
