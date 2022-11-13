#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
  int n,k,i,j;
  char s[20], linNat[20];
  bool ingles;

  scanf("%d",&n);
  getchar();
  for(i=0;i<n;i++){
    scanf("%d",&k);
    getchar();
    ingles = false;
    for (j=0;j<k;j++){
      gets(s);
      if(j==0)
        strcpy(linNat, s);
      if(strcmp(linNat, s) != 0)
        ingles = true;
    }
    if(ingles){
      printf("ingles\n");
    }else{
      printf("%s\n", &s);
    }
  }

  return 0;
}
