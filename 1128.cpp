#include <bits/stdc++.h>
#define MAX 2000

int mat[MAX][MAX];
int visitado[MAX];
int n;

void dfs(int u){
	int v;

	visitado[u] = 1;

	for(v=0;v<n;v++){

		if(mat[u][v] && !visitado[v])
		dfs(v);

	}
}

int main(){
	int m, v, w, p, i, ok, j;
	scanf("%d%d",&n ,&m);

	while(n || m){

		memset(mat, 0, sizeof(mat)); // zera matriz de adjacencias

		while(m--){

		scanf("%d%d%d", &v, &w, &p);
		v--;
		w--;

		mat[v][w] = 1;

		if(p == 2) mat[w][v] = 1;

		}

		ok = 1;

		for(j=0;j<n && ok;j++){

			memset(visitado, 0, sizeof(visitado));

			dfs(j);

			for(i=0;i<n;i++){

				if(!visitado[i]){

					ok = 0;
					break;

				}
			}
		}


		printf("%d\n", ok);

		scanf("%d%d",&n ,&m);
	}

	return 0;
}
