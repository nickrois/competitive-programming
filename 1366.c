#include <stdio.h>

int main(){
  int qType, size, qSticks, i, x;
  for (;;){
    scanf("%d", &qType);

    if(qType == 0){
      break;
    }

    x = 0;
    for(i=0;i<qType;i++){
      scanf("%d %d", &size, &qSticks);
      x = x + qSticks/2;
    }
    x = x/2;
    printf("%d\n", x);
  }
  return 0;
}
