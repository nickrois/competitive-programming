#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  char palavra[1050], teste[50];
  int i, j=1, tam, k=1;
  bool tautograma = true;

  while(k=1){
    tautograma = true;
    j = 1;
    gets(palavra);
    if(palavra[0] == '*'){
      return 0;
    }
    tam = strlen(palavra);
    for(i=0; palavra[i]!='\0'; i++){
            if(palavra[i]>=97 && palavra[i]<=122){
                palavra[i] = palavra[i] - 32;
            }
        }

    teste[0] = palavra[0];

    for(i=0;i<50;i++){
        teste[i] = teste[0];
    }


    for(i=0;i<tam;i++){
      if((palavra[i] == ' ') && (j<50)){
        teste[j] = palavra[i+1];
        j++;
      }
    }

    for(i=0;i<50;i++){
      for(j=0;j<50;j++){
        if(teste[i]==teste[j]){
        }else{
          tautograma = false;
        }
      }
    }

    if(tautograma){
      printf("Y\n");
    }else{
      printf("N\n");
    }
  }

  return 0;
}
