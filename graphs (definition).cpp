/*


aula: busca em profundidade e busca em largura largura



o que e: grafos é uma estrutura de dados composta por nos (Vertices), conectados por arestas (Arcos).
G = (V, A, f)

arestas: representa um relacionamento entre dois nos

exemplos: caminho mais curto, definicao de bordas e delimitacao de espaco, fluxo maximo, controle de trafego, busca de informacoes por search engines, menor numero de voos entre duas localidades, caminho minimo, etc

obs.: grafo ciclico, grafo conexo (desconexao aumenta componentes), grafo direcionado, ou digrafo, (vai de um ponto a outro em um unico sentido), grafo ponderado (arestas com pesos diferentes, que podem representar distancias, tempo de execucao, etc),

representacao de grafos (depende do tamanho e forma de processamento): 
 -lista de adjacencia
 	cada nos x é atribuida uma lista d enos para os quais existe uma aresta a partir de x, pode-se utilizar array de vectors. ve qual é o prox de cada no... se nao direcionado, as arestas sao adicionadas em AMBAS as direcoes. se o grafo é ponderado, é colocado dentro do vector um outro int (pair) com o peso da aresta. ex.: percorre e verifica todos os destinos possiveis com um determinado no de origem
  -matriz de adjacencia
  	contem a informacao das arestas do grafo. indica se tem uma aresta que sai de a e vai para b (consultar matriz teórica). se grafo ponderado, peso é quem entra na matriz

	       - a b c d e (destino)
	       a 0 7 _ _ _
		   b-1 0 _ _ _
		   c _ _ 0 _ _
		   d _ _ _ 0 _
		   (origem)
  
  numero representa peso...
  -lista de arestas
  	serve, por exemplo, pra algoritmo de arvore geradora minima. contem todas as arestas do grafo, em alguma ordem aleatoria, utilizado em grafos que dependem apenas das arestas e seus custos.
  -qual a melhor?
  	se muitas arestas (denso): matriz de adjacencia
  	se poucas arestas (esparso): lista de adjacencia
  	se apenas arestas importam: lista de arestas
  	
percurso em grafos:
	-busca em profundidade(usa pilha) (DFS- DEPTH FIRST SEARCH)
		avanca em um grafo ate chegar no final(marca numero como visitado), analisando vizinhos, ao chegar no fim, volta e repete a busca para o outro lado do ultimo no percorrido antes de chegar no final. por isso utiliza pilhas. depois de inserir na pilha de visitados, marca tal numero ja percorrido como visitado. var para quant de vertices, matriz de adjacencia (pode utilizar lista de adjacencia, se quiser), vetor de visitados, marcador/vetor do anterior(recursivo), pilha(nao recursivo).
	-busca em largura/nivel(usa fila) (BFS- BREADTH FIRST SEARCH)
    	analisa vizinhos diretos do no inicial e parte para o os vizinhos ate percorrer todos os nos do grafo. detalhes adicionais em relacao a DFS. visita nos de um grafo em ordem crescente de niveis para o no inicial da busca. pode-se calcular a distancia entre nos, quantidade de niveis. estrutura de fila. passa para o nivel seguinte do grafo (proximos vizinhos) depois que percorrer todo o nivel anterior. var para quant de vertices, matriz de adjacencia (pode utilizar lista de adjacencia, se quiser), vetor de distancia, fila.
    	
	-www3.cs.stonybrook.edu/~skiena/combinatorica/animations/search.html
*/

/*
//1128 beecrowd
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
*/

/*
//2294
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
*/
