#include <stdio.h>

#define MAX 10

void printGraph(int graph[MAX][MAX], int v) {
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[MAX][MAX] = {0}; // ��ʼ���ڽӾ���
    int v = 5; // �ڵ�����

    // ��ӱ�
    graph[0][1] = 1; // �ӽڵ�0���ڵ�1
    graph[0][4] = 1; // �ӽڵ�0���ڵ�4
    graph[1][2] = 1; // �ӽڵ�1���ڵ�2
    graph[1][3] = 1; // �ӽڵ�1���ڵ�3
    graph[1][4] = 1; // �ӽڵ�1���ڵ�4
    graph[3][4] = 1; // �ӽڵ�3���ڵ�4

    printGraph(graph, v);
    return 0;
}
