#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int runasE,fShip,atual=0,valor,i;
  char runa;

  scanf("%d %d",&runasE, &fShip);
  int vetInt[runasE];
  char vetChar[runasE];

  for(i=0;i<runasE;i++){
    scanf(" %c %d",&vetChar[i],&vetInt[i]);
  }

  scanf("%d",&i);
  for(int j=0;j<i;j++){
    scanf(" %c",&runa);
    for(int k=0;k<runasE;k++){
      if(vetChar[k] == runa)
        atual += vetInt[k];
    }
  }

  printf("%d\n",atual);
  if(atual>=fShip)
    printf("You shall pass!\n");
  else
    printf("My precioooous\n");
  return 0;
}
