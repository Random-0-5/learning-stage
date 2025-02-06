#include <stdio.h>

//�鲢����
// �ϲ�����������
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // ������ʱ����
    int L[n1], R[n2];

    // �����ݸ��Ƶ���ʱ����L��R
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // �鲢��ʱ�����ԭ����
    i = 0; // ��ʼ����һ�������������
    j = 0; // ��ʼ���ڶ��������������
    k = left; // ��ʼ���ϲ��������
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // ����L�е�ʣ��Ԫ��
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // ����R�е�ʣ��Ԫ��
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// ���鲢������
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // ��ֹ���
        
        // �ݹ��������벿��
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        // �ϲ�������İ벿��
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    merge_sort(arr, 0, n - 1);
    
    printf("�����������ǣ�\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
