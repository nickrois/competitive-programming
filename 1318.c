#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *A, const void *B){
    const int* a = (const int*)A;
    const int* b = (const int*)B;

    if (*b > *a)
        return 1;
    else if (*a == *b)
            return 0;
        else
            return -1;
}

int main(){
    int n,m,i,cont=0;

    while(scanf("%d %d",&m,&n)){
      int vet[n];
      cont=0;

      if((m==0)&&(n==0))
        break;

      for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
      }

      qsort(vet,n+1,sizeof(int),compare);

      for(i=0;i<n+1;i++){
          if((vet[i]==vet[i+1])){
            cont += 1;
            if(vet[i]==vet[i+2])
              cont-=1;
          }
      }

      printf("%d\n",cont);
    }
    return 0;
}
