#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,casos,loop[10001],picos;

    scanf("%d",&casos);
    getchar();

    while(casos){
      picos = 0;

      for(i=0;i<casos;i++){
        scanf("%d",&loop[i]);
      }
      loop[i] = loop[0];

      for(i=1;i<casos;i++){
        if((loop[i]>loop[i-1] && loop[i]>loop[i+1]) ||
           (loop[i]<loop[i-1] && loop[i]<loop[i+1]))
          picos++;
      }

      if((loop[0]<loop[1] && loop[casos]<loop[casos-1]) ||
         (loop[0]>loop[1] && loop[casos]>loop[casos-1]))
         picos++;


      printf("%d\n",picos);

      scanf("%d",&casos);
      getchar();
    }

    return 0;
}
