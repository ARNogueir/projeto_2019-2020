//
// Created by andre on 09-11-2019.
//

#ifndef LP1_AED1_FUNCOES_H
#define LP1_AED1_FUNCOES_H

//Padroes matrizes
#define tamteste 2


//carrega todos os tamanhos, problema com espacos vazios na matriz, nao da... testar
int load_matrix(int tamanho);

int define_matrix_user();

void print_matrix(int matrix[][tamteste], int tamanho);

void preenche_matriz_aleatoria(int numero, int tamanho);

#endif //LP1_AED1_FUNCOES_H
