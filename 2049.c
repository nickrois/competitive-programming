#include <stdio.h>
#include <string.h>

int main(){
  char ass[300001];
  char fra[300001];
  char *teste;
  int cont=1;
  while(scanf("%s",&ass)){
    if(strcmp(ass,"0")==0)
      break;

    if(cont != 1)
      printf("\n");

    scanf(" %s",&fra);
    teste = strstr(fra,ass);

    printf("Instancia %d\n",cont);

    if(teste!=NULL)
      printf("verdadeira\n");
    else
      printf("falsa\n");


    cont++;
  }
  return 0;
}
