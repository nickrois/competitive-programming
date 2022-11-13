#include <stdio.h>

int main(){
  int n,a,c,res;
  char b;
  scanf("%d",&n);
  while(n--){
    scanf("%d%c%d",&a,&b,&c);
    if(a!=c && b<=90)
      res = c-a;
    if(a!=c && b>90)
      res = c+a;
    if(a==c)
      res = a*c;
    printf("%d\n",res);
  }
  return 0;
}
