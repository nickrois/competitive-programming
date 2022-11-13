#include <stdio.h>
#include <stdbool.h>
int main(){
  int vezes,numero;
  bool primo = true;

  scanf("%d",&vezes);
  getchar();

  for(int i=0;i<vezes;i++){
    scanf("%d",&numero);
    getchar();

    for(int j=0;j<numero;j++){
      if((j!=0)&&(j!=1)&&(numero%j==0))
        primo = false;
    }

    if(primo)
      printf("%d eh primo\n",numero);
    else
      printf("%d nao eh primo\n",numero);

    primo  = true;
  }
  return 0;
}
