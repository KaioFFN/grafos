#include <stdio.h>

// GRAFO DE MATRIZ
struct graph {
	int vertices;
	int arcos;
	int** adj;
};
typedef struct graph* Graph;

Graph criargrafo(int v);
void inserir_grafo(Graph v, int comeco, int final);
void imprimir_grafo(Graph v);
void quantidade_graus(Graph v);
void libera_grafo(Graph v);

//GRAFO DE LISTA 

typedef struct lista {
	int info_v;
	struct lista* prox;
} Lista;

struct graph_l {
	int V;
	int A;
	Lista* lista;
};


typedef struct graph_l* Graph_l;


Graph_l criagrafol(int vert);
void libera_grafo_l(Graph_l lst);
void inserir_grafo_l(Graph_l lst, int vert_ori, int vert_dest);
void imprime_grafo_l(Graph_l lst);
int* calc_graus_l(Graph_l lst);
void imprime_graus_l(int* graus, int tam);
