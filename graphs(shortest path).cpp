/*

Caminho minimo

* Encontrar uma rota entre uma origem e um destino, tal que nenhuma outra rota tenha custo menor daquela encontrada.

* Grafos ponderados
	BFS nao resolve, duas variantes:
								Single-Source Shortest Path (vertices de origem)
								All-Pairs Shortest Path (todos entre todos)
* Grafos nao ponderados
	BFS

> Dijkstra
	grafos direcionados ou nao. ponderados com arestas de pesos nao-negativos!!
	fila de prioridade para armazenar vertices e suas distancias no caminho.
	atualizacao para encontrar as menores distancias no caminho. Condicao de relaxamento
	- é feita uma atualizacao constante em uma tabela de distancias para que o menor caminho seja 		  achado.

> Bellman-Ford
	caminho minimo quando grafo possui arestas com pesos negativos (financas, eletricidade,consumo,etc). Faz relaxamento das arestas do grafo, assim como o dijkstra, mas é lento. tambem usa lista de adjacencia, assim como o dijkstra.

> Floyd-Warshall
	encontra caminhos minimos entre todos os pares de vertices do grafo (all-pairs). é feito por vertices intermediarios. a propria matriz eh a matriz de adjacencia.

*/

//indiana jones
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 1002

vector<pair<int,int>> adj[1000];
int dist[MAX];
int visitado[MAX];

void dijkstra();


int main(){
	int n,m,u,v,w;
	scanf("%d %d",&n,&m);
	getchar();

	while(m || n){

		for(int i=0;i<m;i++){
			scanf("%d %d %d", &u,&v,&w);
			adj[u].push_back({v,w});
			adj[v].push_back({u,w});
		}
		dijkstra();
		cout << dist[n+1] << endl;

		for(u=0;u<MAX;u++)
			adj[u].clear();


		scanf("%d %d",&n,&m);
		getchar();
	}

return 0;
}

void dijkstra(){

	priority_queue<pair<int, int>> q;
	int a,b,w;

	memset(visitado,0,sizeof(visitado));
	memset(dist,INF,sizeof(dist));

	dist[0] = 0;
 	q.push( {0, 0} );

 while(!q.empty()){
 	a = q.top().second;
 	q.pop();

 	if(visitado[a]) continue;

 	visitado[a] = 1;

 	for(auto u : adj[a]){
 		b = u.first;
 		w = u.second;

 		if(dist[a] + w < dist[b]){
 			dist[b] = dist[a] + w;
 			q.push( {-dist[b], b} );
 		}
 	}
 }
}//end dijkstra
