#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
Graph criargrafo(int vert)
{
    Graph v;
    int i = 0;
    v = (Graph)malloc(sizeof(struct graph));
    v->adj = (int**)malloc(sizeof(int*) * vert);
    for (i = 0; i < vert; i++)
    {
        v->adj[i] = (int*)calloc(vert, sizeof(int));
    }

    v->arcos = 0;
    v->vertices = vert;
    return v;
}

void inserir_grafo(Graph v, int comeco, int final)
{
    v->adj[comeco][final] = 1;
    v->arcos++;
}

void imprimir_grafo(Graph v)
{
    int i, j;
    for (i = 0; i < v->vertices; i++)
    {
        for (j = 0; j < v->vertices; j++)
        {
            printf("%d", v->adj[i][j]);
        }
        printf("\n");
    }
}

void quantidade_graus(Graph v)
{
    int* g = (int*)calloc(v->vertices, sizeof(int));
    for (int i = 0; i < v->vertices; i++)
    {
        for (int j = 0; j < v->vertices; j++)
        {
            g[i] = g[i] + v->adj[j][i];
        }
    }
    for (int i = 0; i < v->vertices; i++)
    {
        printf("%d\t%d\n", i, g[i]);
    }
    free(g);
}

void libera_grafo(Graph v)
{
    int i;
    for (i = 0; i < v->vertices; i++)
    {
        free(v->adj[i]);
    }
    free(v->adj);
    free(v);
};
