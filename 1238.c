#include <stdio.h>
#include <string.h>

int main(){
  int vezes,tam,tam1,tam2;
  char s1[51], s2[51],final[51];
  scanf("%d",&vezes);
  getchar();

  while(vezes--){
    scanf("%s %s",&s1,&s2);
    getchar();
    tam1 = strlen(s1);
    tam2 = strlen(s2);
    if(tam1<tam2)
      tam = tam2;
    else
      tam = tam1;

    for(int i=0;i<tam;i++){
      if(i<tam1)
        printf("%c",s1[i]);
      if(i<tam2)
        printf("%c",s2[i]);
    }
    printf("\n");
  }

  return 0;
}
