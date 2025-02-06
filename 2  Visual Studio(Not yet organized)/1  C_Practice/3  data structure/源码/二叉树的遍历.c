#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// �����½ڵ�
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// ǰ�����
void preOrder(struct Node* node) {
    if (node == NULL) return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("ǰ����������");
    preOrder(root);
    return 0;
}
