#include <stdio.h>

//���ֲ���
int binary_search(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // ����м�Ԫ��
        if (arr[mid] == target) {
            return mid; // ����Ŀ��Ԫ�ص�����
        }
        // ���Ŀ��С���м�Ԫ�أ���С������Χ�����
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // ���Ŀ������м�Ԫ�أ���С������Χ���Ҳ�
        else {
            left = mid + 1;
        }
    }
    return -1; // ���δ�ҵ�������-1
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binary_search(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Ԫ�� %d ������ %d ���ҵ�\n", target, result);
    } else {
        printf("Ԫ�� %d δ�ҵ�\n", target);
    }
    return 0;
}
