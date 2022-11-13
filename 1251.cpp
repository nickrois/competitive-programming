#include <bits/stdc++.h>

using namespace std;

typedef struct num{
  int num;
	int freq;

}num;

int compareint(const void *A, const void *B){
    num* a = (num*)A;
    num* b = (num*)B;

    if (a->freq != b->freq)
        return a->freq - b->freq;

    return b->num - a->num;
}

int main(){
  int vezes,tam,cont=1,i;
  char frase[1002];
  num st[96];
  char *ptr;

  while(fgets(frase, 1002, stdin)){

    for(i=0;i<96;i++){
  		st[i].num = i+32;
      st[i].freq = 0;
  	}

    i=0;
		while(frase[i]!='\n'){
		    st[frase[i]-32].freq++;
        i++;
		}

		qsort(st,96,sizeof(num),compareint);

    if(!cont)
      printf("\n");

		for(i=0;i<96;i++){
			if(st[i].freq>0)
				printf("%d %d\n",st[i].num,st[i].freq);
		}

    cont=0;

  }

  return 0;
}
