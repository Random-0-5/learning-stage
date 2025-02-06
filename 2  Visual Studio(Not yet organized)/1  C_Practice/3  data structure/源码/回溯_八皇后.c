#include <stdio.h>
#include <stdbool.h>

#define N 8

// ��ӡ����
void print_board(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

// ��鵱ǰ�к����Ƿ���Է��ûʺ�
bool is_safe(int board[N][N], int row, int col) {
    // ���ͬһ�е��Ϸ�
    for (int i = 0; i < row; i++) {
        if (board[i][col]) {
            return false;
        }
    }
    // �����Խ���
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    // ����ҶԽ���
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) {
            return false;
        }
    }
    return true;
}

// �����㷨
bool solve_n_queens(int board[N][N], int row) {
    if (row >= N) {
        return true; // ���лʺ󶼳ɹ�����
    }
    
    for (int col = 0; col < N; col++) {
        if (is_safe(board, row, col)) {
            board[row][col] = 1; // ���ûʺ�
            if (solve_n_queens(board, row + 1)) {
                return true; // �ݹ鳢����һ���ʺ�
            }
            board[row][col] = 0; // ���ݣ�ȡ������
        }
    }
    return false; // �޷����ûʺ�
}

int main() {
    int board[N][N] = {0}; // ��ʼ������

    if (solve_n_queens(board, 0)) {
        print_board(board);
    } else {
        printf("û�н������\n");
    }

    return 0;
}
