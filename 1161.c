#include <stdio.h>
#include <stdlib.h>
long long int fat(int n){
  if ((n == 1) || (n == 0)){
        return 1;
    }else{
        return n * fat (n - 1);
    }
}

int main(){

  long long int a, b;
  long long int c;
  while(scanf ("%lld %lld", &a, &b) != EOF){

        a = fat(a);
        b = fat(b);
        c = a + b;
        printf ("%lld\n", c);
    }

  return 0;
}
