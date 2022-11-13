#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long int oracle(int n, int k){
  long long int valor = n;
  int l=1;
  while((n-(l*k))>=1){
    valor = valor*(n-(l*k));
    l++;
  }
  return valor;
}

int main(){
  char s[120], teste[120];
  long long int n=0,k=0,i=0,j=0,tam=0,tamn=0,tame=0,valn=0;
  long long int resultado;

  scanf("%lld", &n);
  getchar();

  for(i=0;i<n;i++){
    gets(s);
    tam = strlen(s);
    while(s[j] != '!'){
        teste[j] = s[j];
        j++;
    }
    teste[j] = '\0';
    valn = abs(atoi(teste));
    tame = tam-j;
    resultado = oracle(valn,tame);
    printf("%lld\n",resultado);
    j=0;
  }

  return 0;
}
