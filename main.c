//
// Created by andre on 09-11-2019.
//
#include "Funcoes.h"
#include "BackTracking.h"
#include "stdio.h"

int main() {

    // 0 means unassigned cells
    int grid[N][N] = {{0, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 3, 0, 0, 0, 0, 8},
                      {0, 3, 0, 5, 8, 2, 7, 6, 0},
                      {0, 0, 0, 0, 0, 0, 3, 0, 6},
                      {1, 0, 0, 0, 4, 0, 0, 0, 0},
                      {0, 0, 0, 0, 7, 0, 0, 0, 0},
                      {5, 0, 0, 0, 0, 0, 8, 9, 0},
                      {0, 0, 0, 9, 2, 0, 0, 0, 0},
                      {0, 8, 2, 0, 5, 1, 0, 3, 0}};


    if (solve(grid)) {
        print_grid(grid);
    } else {
        printf("no solution");
    }


//matriz definida pelo utilizador
    //int padrao = define_matrix_user();

    //int matrix[padrao][padrao];


//matriz carregada de ficheiro

//load_matrix(16);
//preencher matriz aleatoria
//void preenche_matriz_aleatoria(int numero, int tamanho);

    return 0;
}