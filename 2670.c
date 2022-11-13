#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  int a1,a2,a3;
  int andar[3],i,k;

  scanf("%d\n%d\n%d",&a1,&a2,&a3);
  andar[0] = a2*2 + a3*4;
  andar[1] = a1*2 + a3*2;
  andar[2] = a2*2 + a1*4;
  qsort(andar,3,sizeof(int),compare);
  printf("%d\n",andar[0]);

  return 0;
}
