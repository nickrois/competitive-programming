/*
Fluxo em redes (rede de fluxo / flow network)


expressar um deslocamento (fluxo) a partir de um ponto de origem ate um ponto de destino (no problema do fluxo maximo, busca-se maximizar esse deslocamento).

propriedade de conservação (fluxo de partida é o mesmo de chegada),grafos ponderados, destino/origem, aresta representa capacidade maxima de fluxo, NAO valores negativos.

veiculo por ruas, trafego por redes, liquido/gas em dutos, energia, etc.

estrategia gulosa nao funciona para achar o fluxo maximo real! isso acontece porque o algoritmo guloso nao diminui seu flixo, mesmo que o achado seja pouco eficiente.

ai que entra o algoritmo de ford-fulkerson. cria arestas contrarias de inicio em 0.

*/
#include <iostream>
#include <cstring>
#include <queue>

// Infinito
#define INF 0x3F3F3F3F

// Numero de vertices do grafo
#define N 6

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

int main()
{
	// Preencher a matriz de adjacencia do grafo desejado
	int graph[N][N] = { { 0, 5, 0, 4, 0, 0 },
						{ 0, 0, 6, 0, 0, 0 },
						{ 0, 0, 0, 0, 8, 5 },
						{ 0, 3, 0, 0, 1, 0 },
						{ 0, 0, 0, 0, 0, 2 },
						{ 0, 0, 0, 0, 0, 0 } };

	cout << “Fluxo maximo: ” << maxflow(graph, 0, 5) << endl;

	return 0;
}
