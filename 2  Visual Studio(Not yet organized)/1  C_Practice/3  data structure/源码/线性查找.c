#include <stdio.h>

//���Բ���
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // ����Ŀ��Ԫ�ص�����
        }
    }
    return -1; // ���δ�ҵ�������-1
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    int result = linear_search(arr, n, target);
    if (result != -1) {
        printf("Ԫ�� %d ������ %d ���ҵ�\n", target, result);
    } else {
        printf("Ԫ�� %d δ�ҵ�\n", target);
    }
    return 0;
}
