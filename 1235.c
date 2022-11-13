#include <stdio.h>
#include <string.h>

int main(){
  int vezes,tam,j,k;
  char s[101],res[101];
  scanf("%d",&vezes);
  getchar();

  while(vezes--){
    gets(s);
    tam = strlen(s);
    j=0;
    k=0;

    for(int i=(tam/2)-1;i>=0;i--){
      res[j]=s[i];
      j++;
    }
    for(int i=tam-1;i>=(tam/2);i--){
      res[j]=s[i];
      j++;
    }

    res[j]='\0';

    printf("%s\n",res);

  }

  return 0;
}
