#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

Graph_l criagrafol(int vert)
{
	Graph_l lst;
	lst = (Graph_l)malloc(sizeof(struct graph_l));
	lst->lista = (Lista**)calloc(vert , sizeof(Lista));

	lst->A = 0;
	lst->V = vert;

	return lst;

}

void libera_grafo_l(Graph_l lst)
{
	free(lst->lista);
	free(lst);
}

void inserir_grafo_l(Graph_l lst, int vert_ori, int vert_dest) 
{
	Lista* list = &lst->lista[vert_ori];
	Lista* l;

	while (list->prox != NULL)
	{
		list = list->prox;
		if (list->prox == vert_dest)
		{
			return;
		}
	}
	l = (Lista*)malloc(sizeof(Lista));
	l->info_v = vert_dest;
	l->prox = NULL;

	list->prox = l;

	list = &lst->lista[vert_dest];
	while (list->prox != NULL)
	{
		list = list->prox;
	}

	l = (Lista*)malloc(sizeof(Lista));
	l->info_v = vert_ori;
	l->prox = NULL;

	list->prox = l;
	lst->A++;
	return;
}

void imprime_grafo_l(Graph_l lst) 
{
	Lista* lista;
	printf("\n");
	for (int i = 0; i < lst->V; i++)
	{
		printf("%d: \t" , i);
		lista = lst->lista[i].prox;
		while (lista != NULL)
		{
			printf("%d\t" , lista->info_v);
			lista = lista->prox;
		}
		printf("\n");
	}
}
int* calc_graus_l(Graph_l lst) {
	Lista* list;
	int* graus = (int*)malloc(sizeof(int) * lst->V);

	for (int i = 0; i < lst->V; i++) {
		graus[i] = 0;

		for (list = lst->lista[i].prox; list != NULL; list = list->prox) {
			graus[i]++;
		}
	}
	return graus;
}
void imprime_graus_l(int* graus, int tam_vert) {

	printf("\nVertice \tGrau\n");

	for (int i = 0; i < tam_vert; i++) {
		printf("%d\t        %d", i, graus[i]);

		printf("\n");

	}
}
