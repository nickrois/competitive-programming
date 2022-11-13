#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int shift,n,i,j=0;
    char frase[51];

    scanf("%d",&n);
    getchar();
      for(i=0;i<n;i++){
          gets(frase);
          scanf("%d",&shift);
          getchar();

          while(frase[j]!='\0'){
            frase[j] = frase[j]-shift;
            if(frase[j]<65)
              frase[j]=frase[j]+26;
            j++;
          }

          printf("%s\n",frase);
          j=0;
      }
    return 0;
}
