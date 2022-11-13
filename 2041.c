#include <stdio.h>
#include <string.h>

int main(){
  char A[1001], B[1001],teste[1001];
  int n,tama,tamb,j,o=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s %s",&A,&B);
    getchar();
    tama = strlen(A);
    tamb = strlen(B);

    o=0;
    j = tama-tamb;
    if(tama>=tamb){
      for(int k=j;k<tama;k++){
        teste[o]= A[k];
        o++;
      }
      teste[o] = '\0';
      if(strcmp(teste,B)==0){
        printf("encaixa\n");
      }else{
        printf("nao encaixa\n");
      }
    }else{
      printf("nao encaixa\n");
    }

  }
  return 0;
}
