#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int orig,temp,fuso,hora;
  scanf("%d %d %d",&orig,&temp,&fuso);
  if(orig == 0)
    orig = 24;
  if(temp == 0)
    temp = 24;
  if(fuso == 0)
    fuso = 24;

  hora = orig+fuso+temp;

  if(hora == 24)
    printf("0\n");
  if(hora > 24)
    printf("%d\n",hora-24);
  if(hora < 24)
    printf("%d\n",hora);
  return 0;
}
