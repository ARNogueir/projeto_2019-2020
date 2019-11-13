//
// Created by andre on 12-11-2019.
//

#include "BackTracking.h"
#include <stdio.h>


int is_exist_row(int grid[N][N], int row, int num) {
    for (int col = 0; col < 9; col++) {
        if (grid[row][col] == num) {
            return 1;
        }
    }
    return 0;
}
int is_exist_col(int grid[N][N], int col, int num) {
    for (int row = 0; row < 9; row++) {
        if (grid[row][col] == num) {
            return 1;
        }
    }
    return 0;
}


int is_exist_principal(int grid[N][N], int num) {


    for (int i = 0; i < N; ++i) {

        if (grid[i][i] == num) {
            return 1;
        }
    }
    return 0;
}

int is_exist_secund(int grid[N][N], int num) {
    int j = 0;
    for (int i = 8; i >= 0; --i) {

        if (grid[i][j] == num) {
            return 1;
        }
        j++;

    }
    return 0;
}

int is_exist_box(int grid[N][N], int startRow, int startCol, int num) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (grid[row + startRow][col + startCol] == num) {
                return 1;
            }
        }
    }
    return 0;
}

int is_safe_num(int grid[N][N], int row, int col, int num) {

    return !is_exist_row(grid, row, num)
           && !is_exist_col(grid, col, num)
           && !is_exist_box(grid, row - (row % 3), col - (col % 3), num)
           && !is_exist_principal(grid, num)
           && !is_exist_secund(grid, num);
}

int find_unassigned(int grid[N][N], int *row, int *col) {
    for (*row = 0; *row < N; (*row)++) {
        for (*col = 0; *col < N; (*col)++) {
            if (grid[*row][*col] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

int solve(int grid[N][N]) {

    int row = 0;
    int col = 0;

    if (!find_unassigned(grid, &row, &col)) {
        return 1;
    }

    for (int num = 1; num <= N; num++) {

        if (is_safe_num(grid, row, col, num)) {
            grid[row][col] = num;

            if (solve(grid)) {
                return 1;
            }

            grid[row][col] = UNASSIGNED;
        }
    }

    return 0;
}

void print_grid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%2d", grid[row][col]);
        }
        printf("\n");
    }
}

void print_Secundary(int grid[N][N]) {

    int j = 0;
    for (int i = 8; i >= 0; --i) {

        printf("%d\n", grid[i][j]);

        j++;

    }
}