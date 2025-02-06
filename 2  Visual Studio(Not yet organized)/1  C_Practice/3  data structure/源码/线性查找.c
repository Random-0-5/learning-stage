#include <stdio.h>

//线性查找
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // 返回目标元素的索引
        }
    }
    return -1; // 如果未找到，返回-1
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    int result = linear_search(arr, n, target);
    if (result != -1) {
        printf("元素 %d 在索引 %d 处找到\n", target, result);
    } else {
        printf("元素 %d 未找到\n", target);
    }
    return 0;
}
