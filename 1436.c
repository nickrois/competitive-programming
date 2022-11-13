#include <stdio.h>

int main(){
  int cases,first,players[20],captain;
  scanf("%d",&cases);
  for(int i=0;i<cases;i++){
    scanf("%d", &first);
    for(int j=0; j<first; j++){
        scanf("%d", &players[j]);
    }
    captain = (first-1)/2;
    printf("Case %d: %d\n",i+1,players[captain]);
  }
  return 0;
}
