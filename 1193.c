#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int binparadec(char bin[1000]){
  int tam = strlen(bin);
  int num=1,valor=0;
  for(int j=tam-1;j>=0;j--){
    if(bin[j]=='1'){
      valor +=num;
    }
    num *= 2;
  }
  return valor;
}

int main(){
    int n, mascara=0, caso=1, i, j,  cont=0, t, decimal=0;
    char valor[100],tipo, hexa[6]={'a','b','c','d','e','f'};

    scanf("%d",&n);
    while(n--){
        scanf("%s %c",valor,&tipo);
        t = strlen(valor);
        while(getchar()!='\n');

        switch(tipo){
        case 'b':
            printf("Case %d:\n",caso);
            printf("%d dec\n",binparadec(valor));
            printf("%x hex\n\n",binparadec(valor));
            cont=0;
            decimal=0;
            break;
        case 'd':
            printf("Case %d:\n",caso);
            decimal = atoi(valor);
            printf("%x hex\n",decimal);
            i = 31;
            while (!(decimal & (1 << i)))
                i--;
            while(i>=0){
                if(decimal & (1<< i)){
                    printf("1");
                }
                else{
                    printf("0");
                }
                i--;
            }
            printf(" bin\n\n");
            decimal=0;
            break;
        case 'h':
            printf("Case %d:\n",caso);
            for(i=t-1;i>=0;i--){
                if(valor[i]>=97 && valor[i]<=102){
                    for(j=0;j<6;j++){
                        if(valor[i]==hexa[j]){
                            valor[i]=10+j;
                            decimal+=(pow(16,cont))*valor[i];
                            cont++;
                        }
                    }
                }
                else{
                    decimal+=(pow(16,cont))*(valor[i]-48);
                cont++;
                }

            }
            printf("%d dec\n",decimal);
            i = 31;
            while (!(decimal & (1 << i)))
                i--;
            while(i>=0){
                if(decimal & (1<< i)){
                    printf("1");
                }
                else{
                    printf("0");
                }
                i--;
            }
            printf(" bin\n\n");
            cont=0;
            decimal=0;
            break;

        }
        caso++;
    }
    return 0;
}
