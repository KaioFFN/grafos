#include "grafo.h"
int main()
{
    Graph v;
    Graph_l v_l;
    int quant_graus;
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
    v_l = criagrafol(4);
    inserir_grafo_l(v_l, 0 , 1);
    inserir_grafo_l(v_l, 0, 2);
    inserir_grafo_l(v_l, 2, 3);
    imprime_grafo_l(v_l);
    quant_graus = calc_graus_l(v_l);
    
    imprime_graus_l(quant_graus, v_l->V);










    libera_grafo_l(v_l);

};
