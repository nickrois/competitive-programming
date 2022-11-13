#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[11], r[11];
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
      scanf("%s %s",&r,&s);
      getchar();

      if(!strcmp(r,s)){
        printf("empate\n");
      }else if(!strcmp(r, "pedra")){
        if(!strcmp(s,"tesoura")||!strcmp(s,"lagarto"))
          printf("rajesh\n");
        else
          printf("sheldon\n");
      }else if(!strcmp(r, "papel")){
        if(!strcmp(s,"pedra")||!strcmp(s,"spock"))
          printf("rajesh\n");
        else
          printf("sheldon\n");
      }else if(!strcmp(r, "tesoura")){
        if(!strcmp(s,"papel")||!strcmp(s,"lagarto"))
          printf("rajesh\n");
        else
          printf("sheldon\n");
      }else if(!strcmp(r, "lagarto")){
        if(!strcmp(s,"papel")||!strcmp(s,"spock"))
          printf("rajesh\n");
        else
          printf("sheldon\n");
      }else if(!strcmp(r, "spock")){
        if(!strcmp(s,"pedra")||!strcmp(s,"tesoura"))
          printf("rajesh\n");
        else
          printf("sheldon\n");
      }
    }
    return 0;
}
