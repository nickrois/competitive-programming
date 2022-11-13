#include <stdio.h>
#include <string.h>

int main(){
  int vezes,cont,respo;
  char frase[1001];

  scanf("%d\n",&vezes);

  while(vezes--){
    cont=0;
    respo=0;
    scanf("%s",&frase);
    for(int i=0;i<strlen(frase);i++){
      if(frase[i]=='<')
        cont++;
      if(frase[i]=='>' && cont){
        cont--;
        respo++;
      }
    }
    if(respo>0)
      printf("%d\n",respo);
    else
      printf("0\n");
  }

  return 0;
}
