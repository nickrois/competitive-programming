#include <stdio.h>
#include <string.h>

int main(){
    int i,j,cont=0,casos,tam;
    char input[52], teste[52];


    scanf("%d", &casos);
    getchar();
    for (i=0;i<casos;i++){
        gets(input);
        tam = strlen(input);

        if(input[0] != ' '){
          teste[cont] = input[0];
          cont++;
        }
        for(j=0;j<tam; ++j){
            if((input[j] != ' ') && (j!=0) && (input[j-1] == ' '))
                teste[cont++] = input[j];
        }
        teste[cont] = '\0';
        cont=0;

        printf("%s\n",teste);
    }

    return 0;
}
