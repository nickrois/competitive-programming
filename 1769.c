#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
  char cpf[14];
  long long int soma1=0,soma2=0,b1,b2;
  bool valido = true;
  while(scanf("%s",cpf) != EOF){
    getchar();
    soma1 = (cpf[0]-48)*1 + (cpf[1]-48)*2 + (cpf[2]-48)*3 + (cpf[4]-48)*4 + (cpf[5]-48)*5 + (cpf[6]-48)*6 + (cpf[8]-48)*7 + (cpf[9]-48)*8 + (cpf[10]-48)*9;
    soma2 = (cpf[0]-48)*9 + (cpf[1]-48)*8 + (cpf[2]-48)*7 + (cpf[4]-48)*6 + (cpf[5]-48)*5 + (cpf[6]-48)*4 + (cpf[8]-48)*3 + (cpf[9]-48)*2 + (cpf[10]-48)*1;

    if(soma1%11==10)
      b1 = 0;
    else
      b1 = soma1%11;

    if(soma2%11==10)
      b2 = 0;
    else
      b2 = soma2%11;

    if(((cpf[12]-48)!=b1)||((cpf[13]-48)!=b2))
     valido = false;

    if(valido)
      printf("CPF valido\n");
    else
      printf("CPF invalido\n");

    valido  = true;
  }
  return 0;
}
