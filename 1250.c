#include <stdio.h>
#include <string.h>

int main(){
  int cases,tam,shots,hits=0,i,j,cont=0;
  char height[100],jumps[50],hnovo[50];

  scanf("%d",&cases);
  getchar();
  while(cases!=0){
    scanf("%d",&shots);
    getchar();
    gets(height);

    for(j=0;j<100;j++){
      if(height[j]!= ' '){
        hnovo[cont] = height[j];
        cont++;
      }
    }
    hnovo[cont] = '\0';

    gets(jumps);
    tam = strlen(jumps);

    for(j=0;j<tam;j++){
      if((hnovo[j]<='2')&&(jumps[j]=='S'))
        hits++;
      if((hnovo[j]>'2')&&(jumps[j]=='J'))
        hits++;
    }

    printf("%d\n",hits);
    hits = 0;
    cont = 0;
    cases--;
  }
  return 0;
}
