#include <bits/stdc++.h>

using namespace std;

int main(){
	int vezes,entrada,valor;
	int spr,sfi,spi;
	while(scanf("%d",&vezes) != EOF){
		spr=1;
		sfi=1;
		spi=1;
		priority_queue<int> pr;
		queue<int> fi;
		stack<int> pi;
		while(vezes--){
			scanf("%d %d",&entrada,&valor);
			if(entrada==1){
				pr.push(valor);
				fi.push(valor);
				pi.push(valor);
			}
			if(entrada==2){
				if(pr.top()!=valor)
					spr = 0;
				if(fi.front()!=valor)
					sfi = 0;
				if(pi.top()!=valor)
					spi = 0;
				pr.pop();
				fi.pop();
				pi.pop();
			}
		}

		if(spr && !sfi && !spi)
			printf("priority queue\n");
		else if(!spr && sfi && !spi)
			printf("queue\n");
		else if(!spr && !sfi && spi)
			printf("stack\n");
		else if((spr && sfi && spi) || (!spr && sfi && spi) ||
						(spr && !sfi && spi) || (spr && sfi && !spi))
			printf("not sure\n");
		else
			printf("impossible\n");
	}

	return 0;
}
