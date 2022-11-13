#include <stdio.h>

int main(){
    int noite1,noite2;

      scanf("%d %d", &noite1, &noite2);
      getchar();
    if((0<=noite2)&&(noite2<=2))
      printf("nova\n");
    else if((noite2>noite1)&&(3<=noite2)&&(noite2<=96))
      printf("crescente\n");
    else if(noite2>=97)
      printf("cheia\n");
    else if((noite2<noite1)&&(3<=noite2)&&(noite2<=96))
      printf("minguante\n");
    else if((noite2>noite1)&&(3<=noite2)&&(noite2<=96))
      printf("crescente\n");

    return 0;
}
