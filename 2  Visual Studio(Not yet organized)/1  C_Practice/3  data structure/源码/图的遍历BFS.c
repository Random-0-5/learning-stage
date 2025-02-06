#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

struct Queue {
    int items[MAX];
    int front, rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

bool isFull(struct Queue* q) {
    return q->rear == MAX - 1;
}

bool isEmpty(struct Queue* q) {
    return q->front == -1;
}

void enqueue(struct Queue* q, int value) {
    if (!isFull(q)) {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(struct Queue* q) {
    int item;
    if (!isEmpty(q)) {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1; // Reset queue
        }
        return item;
    }
    return -1; // Return -1 if queue is empty
}

void bfs(struct Graph* g, int start) {
    struct Queue q;
    initQueue(&q);
    g->visited[start] = 1; // �����ʼ�ڵ��ѷ���
    enqueue(&q, start); // ����ʼ�ڵ����

    while (!isEmpty(&q)) {
        int current = dequeue(&q); // ����
        printf("%d ", current); // ���ʽڵ�

        for (int i = 0; i < g->n; i++) {
            if (g->adj[current][i] == 1 && !g->visited[i]) {
                g->visited[i] = 1; // ��ǽڵ��ѷ���
                enqueue(&q, i); // ���
            }
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

    printf("BFS���������");
    bfs(&g, 0);
    return 0;
}
