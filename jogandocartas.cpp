#include <bits/stdc++.h>

using namespace std;

int main(){
  int cartas,num,aux;
  scanf("%d",&cartas);
  getchar();
  while(cartas){

    list<int> li;
    list<int> di;

    li.clear();
    di.clear();

    for(int i=1;i<=cartas;i++){
      li.push_back(i);
    }
    printf("Discarded cards:");
    while(li.size() > 1){
      aux = li.front();
      li.pop_front();
      di.push_back(aux);

      printf(" %d",di.back());
      if(li.size()!=1)
        printf(",",di.back());


      li.push_back(li.front());
      li.pop_front();
    }

    printf("\nRemaining card: ");
    printf("%d\n",li.back());


    scanf("%d",&cartas);
    getchar();
  }

  return 0;
}
