#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left+(right-left) / 2; // 计算中间位置

        if (arr[mid] == target) {
            return mid; // 找到目标值，返回索引
        }
        else if (arr[mid] < target) {
            left = mid + 1; // 在右半部分继续查找
        }
        else {
            right = mid - 1; // 在左半部分继续查找
        }
    }

    return -1; // 未找到目标值
}

int main() {
    int arr[] = { 1, 3,7, 7,7, 9, 11 }; // 有序数组
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("目标值 %d 的索引是: %d\n", target, result);
    }
    else {
        printf("目标值 %d 未找到\n", target);
    }

    return 0;
}
