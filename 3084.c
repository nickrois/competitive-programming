#include <stdio.h>
#include <string.h>

int main(){
  float h,m;
  while(scanf("%f %f",&h,&m)!=EOF){
    h = (h/360)*12;
    m = (m/360)*60;
    printf("%02.0f:%02.0f\n",h,m);
  }
  return 0;
}
