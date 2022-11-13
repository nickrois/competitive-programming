#include <bits/stdc++.h>
#define MAX 10

using namespace std;

int mat[MAX][MAX];
int distancia[MAX][MAX];
int n, m;

int valido(int lin, int col){

	return lin>=0 && lin<n && col>=0 && col<m && mat[lin][col]!=2;

}

int bfs(int lin, int col){

	queue<pair<int, int>> fila;
	int dist;
	pair<int, int> p;
	fila.push( {lin, col} );

	distancia[lin][col] = 0;

	while(!fila.empty()){

		p = fila.front();
		fila.pop();

		lin = p.first;
		col = p.second;
		dist = distancia[lin][col];

		if(mat[lin][col]==0) //saida
			return dist;

		if(valido(lin-1, col) && distancia[lin-1][col]==-1) //cima
			fila.push({lin-1,col}), distancia[lin-1][col] = dist + 1;

		if(valido(lin+1, col) && distancia[lin+1][col]==-1) //baixo
			fila.push({lin+1,col}), distancia[lin+1][col] = dist + 1;

		if(valido(lin, col+1) && distancia[lin][col+1]==-1) //dir
			fila.push({lin,col+1}), distancia[lin][col+1] = dist + 1;

		if(valido(lin, col-1) && distancia[lin][col-1]==-1) //esq
			fila.push({lin,col-1}), distancia[lin][col-1] = dist + 1;

	}
}

int main(){
	int i, j;
	int lin, col;

	memset(distancia, -1,sizeof(distancia));

	scanf("%d%d", &n, &m);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]==3){
				lin = i;
				col = j;
			}
		}
	}

	printf("%d\n",bfs(lin,col));
	return 0;
}
