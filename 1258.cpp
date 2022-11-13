#include <bits/stdc++.h>

using namespace std;

typedef struct no{
  char nom[100];
  char cor[100];
  char tam[100];
}noLista;

bool compare(noLista a, noLista b){
    if(!strcmp(a.cor, b.cor)){
        if(!strcmp(a.tam, b.tam))
          return strcmp(a.nom, b.nom)<0;
        else
          return strcmp(a.tam, b.tam)>0;
    }else
        return strcmp(a.cor, b.cor)<0;
}

int main(){
  noLista lista[100];
  int vezes, i, j;

  scanf("%d",&vezes);
  getchar();

  while(1){

    for(i=0;i<vezes;i++){
      scanf("%[^\n]s",&lista[i].nom);
      scanf("%s %s", &lista[i].cor, &lista[i].tam);
      getchar();
    }

    sort(lista,lista + vezes,compare);

    for(i=0;i<vezes;i++){
      printf("%s %s %s\n",lista[i].cor,lista[i].tam,lista[i].nom);
    }

    scanf("%d",&vezes);
    getchar();

    if(!vezes)
      break;
    else
      printf("\n");

  }

  return 0;
}
