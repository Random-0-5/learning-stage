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
    int graph[MAX][MAX] = {0}; // 初始化邻接矩阵
    int v = 5; // 节点数量

    // 添加边
    graph[0][1] = 1; // 从节点0到节点1
    graph[0][4] = 1; // 从节点0到节点4
    graph[1][2] = 1; // 从节点1到节点2
    graph[1][3] = 1; // 从节点1到节点3
    graph[1][4] = 1; // 从节点1到节点4
    graph[3][4] = 1; // 从节点3到节点4

    printGraph(graph, v);
    return 0;
}
