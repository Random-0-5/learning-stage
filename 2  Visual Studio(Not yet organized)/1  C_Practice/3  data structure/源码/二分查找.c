#include <stdio.h>

//二分查找
int binary_search(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // 检查中间元素
        if (arr[mid] == target) {
            return mid; // 返回目标元素的索引
        }
        // 如果目标小于中间元素，缩小搜索范围到左侧
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // 如果目标大于中间元素，缩小搜索范围到右侧
        else {
            left = mid + 1;
        }
    }
    return -1; // 如果未找到，返回-1
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binary_search(arr, 0, n - 1, target);
    if (result != -1) {
        printf("元素 %d 在索引 %d 处找到\n", target, result);
    } else {
        printf("元素 %d 未找到\n", target);
    }
    return 0;
}
