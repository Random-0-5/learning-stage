#include <stdio.h>

//归并排序
// 合并两个子数组
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 创建临时数组
    int L[n1], R[n2];

    // 将数据复制到临时数组L和R
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 归并临时数组回原数组
    i = 0; // 初始化第一个子数组的索引
    j = 0; // 初始化第二个子数组的索引
    k = left; // 初始化合并后的索引
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

    // 复制L中的剩余元素
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 复制R中的剩余元素
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 主归并排序函数
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // 防止溢出
        
        // 递归排序两半部分
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        // 合并已排序的半部分
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    merge_sort(arr, 0, n - 1);
    
    printf("排序后的数组是：\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
