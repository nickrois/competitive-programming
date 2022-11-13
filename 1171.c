#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *A, const void *B){
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
    int aux,n,i,j,cont=1;
    scanf("%d",&n);
    int vet[n];
    for(i=0;i<n;i++){
      scanf("%d",&vet[i]);
    }


      qsort(vet,n+1,sizeof(int),compare);

      for(i=0,j=1;i<n;i++){
        cont=1;
        while(vet[i]==vet[j]){
          cont +=1;
          j++;
        }
        if(vet[i]!=vet[i-1]){
          if(vet[i]!=vet[0])
            cont--;
          printf("%d aparece %d vez(es)\n",vet[i],cont);
        }
      }

    return 0;
}
