#include <stdio.h>
#include <string.h>

int main(){
  long long int cases,tam,i,j,led=0;
  char number[101];

  scanf("%lld",&cases);
  getchar();
  while(cases!=0){
    gets(number);
    tam = strlen(number);
    for(i=0;i<tam;i++){
      if(number[i]=='\0')
       break;
      if(number[i]=='1')
       led += 2;
      if(number[i]=='2')
       led += 5;
      if(number[i]=='3')
       led += 5;
      if(number[i]=='4')
       led += 4;
      if(number[i]=='5')
       led += 5;
      if(number[i]=='6')
       led += 6;
      if(number[i]=='7')
       led += 3;
      if(number[i]=='8')
       led += 7;
      if(number[i]=='9')
       led += 6;
      if(number[i]=='0')
       led += 6;

    }
    printf("%lld leds\n",led);

    led = 0;
    cases--;
  }
  return 0;
}
