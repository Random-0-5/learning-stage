#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Graph {
    int adj[MAX][MAX];
    int visited[MAX];
    int n;
};

void dfs(struct Graph* g, int v) {
    g->visited[v] = 1; // ��ǽڵ�Ϊ�ѷ���
    printf("%d ", v); // ���ʽڵ�

    for (int i = 0; i < g->n; i++) {
        if (g->adj[v][i] == 1 && !g->visited[i]) {
            dfs(g, i);
        }
    }
}

int main() {
    struct Graph g;
    g.n = 5;
    for (int i = 0; i < g.n; i++)
        for (int j = 0; j < g.n; j++)
            g.adj[i][j] = 0; // ��ʼ���ڽӾ���

    // ����ͼ
    g.adj[0][1] = 1;
    g.adj[0][4] = 1;
    g.adj[1][2] = 1;
    g.adj[1][3] = 1;
    g.adj[1][4] = 1;
    g.adj[3][4] = 1;

    printf("DFS���������");
    dfs(&g, 0);
    return 0;
}
