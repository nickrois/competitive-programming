#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *p1, const void *p2){
  return strcmp(p1,p2);
}

int main(){
    int cont,i,bem=0,mal=0;
    char test;

    scanf("%d ",&cont); //recebe quantidade de casos

    char kids[cont][21];

    for(i=0;i<cont;i++){ // recebe valores +,- e nome das criancas
        scanf("%c %s ",&test,kids[i]);
        if(test=='+')
            bem++;
    }
    qsort(kids,cont,21,compare); // ordena criancas
    for(i=0;i<cont;i++){
        printf("%s\n",kids[i]); // imprime criancas
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n",bem,cont-bem); // mensagem final

    return 0;
}
