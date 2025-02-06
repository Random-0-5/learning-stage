#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left+(right-left) / 2; // �����м�λ��

        if (arr[mid] == target) {
            return mid; // �ҵ�Ŀ��ֵ����������
        }
        else if (arr[mid] < target) {
            left = mid + 1; // ���Ұ벿�ּ�������
        }
        else {
            right = mid - 1; // ����벿�ּ�������
        }
    }

    return -1; // δ�ҵ�Ŀ��ֵ
}

int main() {
    int arr[] = { 1, 3,7, 7,7, 9, 11 }; // ��������
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Ŀ��ֵ %d ��������: %d\n", target, result);
    }
    else {
        printf("Ŀ��ֵ %d δ�ҵ�\n", target);
    }

    return 0;
}
