#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int quant,direita=0,esquerda=0,tam;
    while(scanf("%d", &tam)){
        if(tam==0)
          return 0;

        char frase[tam];
        scanf("%s",frase);

        for(int i=0; i<tam; i++){
            if(frase[i]=='D')
                direita++;
            if(frase[i]=='E')
                esquerda++;
        }

        if(direita-esquerda==0 || abs(direita-esquerda)%4==0)
            printf("N\n");
        else if(direita-esquerda==1 || (direita-esquerda)%4==1 || (esquerda-direita)==3 || (esquerda-direita)%4==3)
            printf("L\n");
        else if(direita-esquerda==2 || abs(direita-esquerda)%4==2)
            printf("S\n");
        else if(direita-esquerda==3 || (direita-esquerda)%4==3 || (esquerda-direita)==1 || (esquerda-direita)%4==1)
            printf("O\n");


        direita=0;
        esquerda=0;
    }


    return 0;
}
