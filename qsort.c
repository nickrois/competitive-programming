#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparestr(const void *p1, const void *p2){
  return strcmp(p1,p2);
}

int compareint(const void *A, const void *B){
    const int* a = (const int*)A;
    const int* b = (const int*)B;

    if (*b > *a)
        return -1;
    else if (*a == *b)
            return 0;
        else
            return 1;
}

int main(){
    int cont,i,bem=0,mal=0;
    char test;
    int testecompare[] = {5,3,2,5,6,0,1};

    scanf("%d ",&cont); //recebe quantidade de casos

    char kids[cont][21];

    for(i=0;i<cont;i++){ // recebe valores +,- e nome das criancas
        scanf("%c %s",&test,kids[i]);
        getchar();
        if(test=='+')
            bem++;
    }
    qsort(kids,cont,21,comparestr); // ordena criancas
    qsort(testecompare,7,sizeof(int),compareint);
    for(i=0;i<cont;i++){
        printf("%s\n",kids[i]); // imprime criancas
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n",bem,cont-bem); // mensagem final
    for(i=0;i<7;i++){
      printf("Teste sort inteiros: %d\n",testecompare[i]);
    }

    return 0;
}
