//
// Created by andre on 09-11-2019.
//

#include<stdio.h>
#include "Funcoes.h"

void print_matrix(int matrix[][tamteste], int tamanho) {

    printf("A matriz criada tem o padrao %dx%d.\n", tamanho, tamanho);

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {

            printf("[%d]", matrix[i][j]);
        }
        printf("\n");
    }
}

int load_matrix(int tamanho) {

    int i, j;

    FILE *fp;

    fp = fopen("C:\\Users\\andre\\Desktop\\Projetos 2019-2020\\LP1_AED1\\Ficheiros\\test_matrix_16x16.txt", "r");

    if (fp == NULL) {
        printf("Impossivel abrir o ficheiro, provavelmente o endereco esta errado\n");
    }

    int **matriz;


    while (!feof(fp)) {
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < tamanho; j++) {

                fscanf(fp, "%d", &matriz[i][j]);
            }
        }
    }

    printf("Matriz lida com sucesso\n");

    print_matrix(matriz, tamanho);

    return 0;
}

/*
int aleatorio(int i, int j){
    int a;
    int min = 1;
    int max = 9;
    do{
        a = min + rand() % (max - min + 1);
    }while(lista[i][j][a]==1);
    return a;

}*/

int define_matrix_user() {

    int colunas_user;

    printf("A matriz de jogo devera ter um dos seguintes tamanhos:\n[9x9]\n[16x16]\n[25x25]\n[36x36]\n");

    printf("Qual o tamanho da matriz que pretende criar?\nInsira apenas o numero de colunas\n");
    scanf(" %d", &colunas_user);

    if ((colunas_user != 9) && (colunas_user != 16) && (colunas_user != 25) && (colunas_user != 36)) {
        printf("lamentamos mas nao podemos criar um jogo como o tamanho que inseriu\n o nosso jogo apenas permite quadrados perfeitos\npor favor tente novamente\n");
        define_matrix_user();
    }
    return colunas_user;
}
