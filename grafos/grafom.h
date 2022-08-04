#include <stdio.h>
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
