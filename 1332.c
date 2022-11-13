#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tam,n,i,on=0,tw=0,th=0,j=0;
    char frase[10];

    scanf("%d",&n);
    getchar();
      for(i=0;i<n;i++){
          gets(frase);
          tam = strlen(frase);
          if((frase[0]=='o'))
            on += 1;
          if((frase[1]=='n'))
            on += 1;
          if((frase[2]=='e'))
            on += 1;
          if((frase[0]=='t'))
            tw += 1;
          if((frase[1]=='w'))
            tw += 1;
          if((frase[2]=='o'))
            tw += 1;
          if(on>=2)
            printf("1\n");
          else if(tw>=2)
            printf("2\n");
          else
            printf("3\n");

          on=0;
          tw=0;
          th=0;
      }
    return 0;
}
