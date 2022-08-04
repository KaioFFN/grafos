#include "grafom.h"
int main()
{
    Graph v;
    v = criargrafo(4);
    inserir_grafo(v, 0, 1);
    inserir_grafo(v, 1, 2);
    inserir_grafo(v, 0, 2);
    inserir_grafo(v, 0, 3);
    inserir_grafo(v, 1, 1);
    inserir_grafo(v, 2, 1);
    inserir_grafo(v, 3, 1);
    inserir_grafo(v, 2, 3);
    imprimir_grafo(v);
    quantidade_graus(v);
    libera_grafo(v);

};
