#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int tam;
  bool aux;
  char frase[51];

    while(gets(frase)!=NULL){
      aux = true;
      //scanf("%[^\n]s",&frase);
      tam = strlen(frase);

      for(int i=0;i<tam;i++){
        if(frase[i]!=' '){
          //if(frase[i]>=97 && !aux);

          if(frase[i]>=97 && aux)
            frase[i]-=32;

          if(frase[i]<97 && !aux)
            frase[i]+=32;

          //if(frase[i]<97 && aux);

          aux = !aux;
        }
      }
      frase[tam] = '\0';

      printf("%s\n",frase);
    }

  return 0;
}
