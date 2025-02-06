#include <stdio.h>
#include <stdbool.h>

#define N 8

// 打印棋盘
void print_board(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

// 检查当前行和列是否可以放置皇后
bool is_safe(int board[N][N], int row, int col) {
    // 检查同一列的上方
    for (int i = 0; i < row; i++) {
        if (board[i][col]) {
            return false;
        }
    }
    // 检查左对角线
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    // 检查右对角线
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) {
            return false;
        }
    }
    return true;
}

// 回溯算法
bool solve_n_queens(int board[N][N], int row) {
    if (row >= N) {
        return true; // 所有皇后都成功放置
    }
    
    for (int col = 0; col < N; col++) {
        if (is_safe(board, row, col)) {
            board[row][col] = 1; // 放置皇后
            if (solve_n_queens(board, row + 1)) {
                return true; // 递归尝试下一个皇后
            }
            board[row][col] = 0; // 回溯，取消放置
        }
    }
    return false; // 无法放置皇后
}

int main() {
    int board[N][N] = {0}; // 初始化棋盘

    if (solve_n_queens(board, 0)) {
        print_board(board);
    } else {
        printf("没有解决方案\n");
    }

    return 0;
}
