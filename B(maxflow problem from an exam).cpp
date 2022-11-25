#include <iostream>
#include <cstring>
#include <queue>

// Infinito
#define INF 0x3F3F3F3F

// Numero de vertices do grafo
#define N 101

using namespace std;

/**
* Busca em Largura.
* Retorna 1 se existe um caminho entre s e t.
* @param rGraph O grafo residual.
* @param s O vertice de origem.
* @param t O vertice de destino.
* @param anterior Este vetor eh preenchido pelo metodo bfs para armazenar o caminho.
* @return 1, se existe um caminho entre s e t; 0, caso contrario.
*/
int bfs(int rGraph[N][N], int s, int t, int anterior[N])
{
	int u, v;

	// Inicia o vetor dos vertices visitados com zero.
	int visited[N];
	memset(visited, 0, sizeof(visited));
	// Cria uma fila, insere o vertice de origem na fila e o marca como visitado.
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	anterior[s] = -1; // anterior da origem nao existe

	// Loop da BFS
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		for(v = 0; v < N; v++)
		{
			if(visited[v] == 0 && rGraph[u][v] > 0)
			{
				// Se encontrou o destino: seta o anterior e encerra,
				// pois nao ha vertices apos o destino.
				if(v == t)
				{
					anterior[v] = u;
					return 1;
				}
				q.push(v);
				anterior[v] = u;
				visited[v] = 1;
			}
		}
	} // while
	// Se chegar aqui, eh pq nao encontrou o vertice destino
return 0;
} // bfs

/**
* Implemetacao de Ford-Fulkerson.
* @param graph A matriz de adjacencia do grafo.
* @param s O vertice de origem.
* @param t O vertice de destino.
* @return O valor do fluxo maximo entre s e t.
*/
int maxflow(int graph[N][N], int s, int t)
{
	int u, v;
	int anterior[N]; // Caminho da BFS
	int fluxoMax = 0; // Fluxo inicialmente nulo
	int bot; // bottleneck: gargalo de fluxo (valor da menor aresta do caminho)
	// Grafo residual: inicializado com as capacidades do grafo original
	// Cada posicao rGraph[i][j] indica a capacidade restante de i para j.
	int rGraph[N][N];
	for(u = 0; u < N; u++)
		for(v = 0; v < N; v++)
			rGraph[u][v] = graph[u][v];

	// Aumenta o fluxo enquanto existir um caminho
	while( bfs(rGraph, s, t, anterior) )
	{
		// Encontra o valor minimo de aresta no caminho da BFS
		bot = INF;
		for(v = t; v != s; v = anterior[v])
		{
			u = anterior[v];
			bot = min(bot, rGraph[u][v]);
		}
		// Atualiza a capacidade das arestas originais e contrarias do caminho
		for(v = t; v != s; v = anterior[v])
		{
			u = anterior[v];
			rGraph[u][v] -= bot;
			rGraph[v][u] += bot;
		}

		// Aumenta o fluxo
		fluxoMax += bot;
	} // while

	 // Returna o fluxo maximo encontrado
	return fluxoMax;
} // maxflow

int main(){
	int rede=0,num,s,t,c,u,v,b;
	int graph[N][N];
	scanf("%d",&num);
	getchar();
	while(num){
		memset(graph,0,sizeof(graph));
		scanf("%d %d %d",&s,&t,&c);
		getchar();
		for(int i=0;i<c;i++){
			scanf("%d %d %d",&u,&v,&b);
			getchar();
			graph[u][v] += b;
			graph[v][u] += b;
		}



	cout << "Rede " << rede << endl;
	cout << maxflow(graph, s, t) << endl << endl;
	rede += 1;
	scanf("%d",&num);
	getchar();
	}


	return 0;
}
