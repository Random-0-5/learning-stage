#include <stdio.h>

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        // �������Բ�ֵ��ʽ����λ��
        if (low == high) {
            if (arr[low] == x) {
                return low;
            }
            return -1;
        }

        int pos = low + ((double)(high - low) / (arr[high] - arr[low]) * (x - arr[low]));

        // ����ҵ�Ŀ��Ԫ��
        if (arr[pos] == x) {
            return pos;
        }

        // ���Ŀ��ֵ����λ��Ԫ�أ������Ұ벿
        if (arr[pos] < x) {
            low = pos + 1;
        } else { // ���Ŀ��ֵС��λ��Ԫ�أ�������벿
            high = pos - 1;
        }
    }
    return -1; // ���û���ҵ�Ŀ��ֵ
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 70;
    int result = interpolationSearch(arr, n, x);

    if (result != -1) {
        printf("Ԫ�� %d �������е�������: %d\n", x, result);
    } else {
        printf("Ԫ�� %d ����������\n", x);
    }

    return 0;
}
