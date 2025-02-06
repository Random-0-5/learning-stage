#include <stdio.h>

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        // 根据线性插值公式计算位置
        if (low == high) {
            if (arr[low] == x) {
                return low;
            }
            return -1;
        }

        int pos = low + ((double)(high - low) / (arr[high] - arr[low]) * (x - arr[low]));

        // 如果找到目标元素
        if (arr[pos] == x) {
            return pos;
        }

        // 如果目标值大于位置元素，搜索右半部
        if (arr[pos] < x) {
            low = pos + 1;
        } else { // 如果目标值小于位置元素，搜索左半部
            high = pos - 1;
        }
    }
    return -1; // 如果没有找到目标值
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 70;
    int result = interpolationSearch(arr, n, x);

    if (result != -1) {
        printf("元素 %d 在数组中的索引是: %d\n", x, result);
    } else {
        printf("元素 %d 不在数组中\n", x);
    }

    return 0;
}
