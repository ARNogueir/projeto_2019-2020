//
// Created by andre on 12-11-2019.
//

#ifndef LP1_AED1_BACKTRACKING_H
#define LP1_AED1_BACKTRACKING_H

#define N 9
#define UNASSIGNED 0

int is_exist_row(int grid[N][N], int row, int num);

int is_exist_col(int grid[N][N], int col, int num);

int is_exist_principal(int grid[N][N], int num);

int is_exist_secund(int grid[N][N], int num);

int is_exist_box(int grid[N][N], int startRow, int startCol, int num);

int is_safe_num(int grid[N][N], int row, int col, int num);

int find_unassigned(int grid[N][N], int *row, int *col);

int solve(int grid[N][N]);


//Funcoes auxiliares ao desenvolvimento do projeto
void print_Secundary(int grid[N][N]);

void print_grid(int grid[N][N]);


#endif //LP1_AED1_BACKTRACKING_H
