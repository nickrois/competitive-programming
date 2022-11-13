#include <bits/stdc++.h>
using namespace std;

int main() {
    int pum,cont=1,vezes;

    scanf("%d",&vezes);

    while(vezes){
      if(cont%4==0){
        printf("PUM\n");
        vezes--;
      }else
        printf("%d ",cont);

      cont += 1;
    }

    return 0;
}
