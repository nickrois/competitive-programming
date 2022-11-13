#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){
  char pais[24][50] = {"brasil","alemanha","austria","coreia","espanha","grecia","estados-unidos","inglaterra",
                        "australia","portugal","suecia","turquia","argentina","chile","mexico","antardida",
                        "canada","irlanda","belgica","italia","libia","siria","marrocos","japao"};
  char teste[50];
  int i;
  char feliz[24][50] = {"Feliz Natal!","Frohliche Weihnachten!","Frohe Weihnacht!","Chuk Sung Tan!","Feliz Navidad!","Kala Christougena!",
                        "Merry Christmas!","Merry Christmas!","Merry Christmas!","Feliz Natal!","God Jul!","Mutlu Noeller","Feliz Navidad!",
                        "Feliz Navidad!","Feliz Navidad!","Merry Christmas!","Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!",
                        "Buon Natale!","Buon Natale!","Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!"};

    while(scanf(" %s",teste)!=EOF){
      getchar();
      i=0;

      while(strcmp(pais[i],teste)!=0){
        i++;
        if(i>24)
          break;
      }

      strcpy(teste,feliz[i]);

      if(i>24)
        printf("--- NOT FOUND ---\n");
      else
        printf("%s\n",teste);

    }

  return 0;
}
