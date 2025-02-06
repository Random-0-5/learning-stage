/*煎饼排序
给你一个整数数组 arr ，请使用 煎饼翻转 完成对数组的排序。

一次煎饼翻转的执行过程如下：
选择一个整数 k ，1 <= k <= arr.length
反转子数组 arr[0...k-1]（下标从 0 开始）
例如，arr = [3,2,1,4] ，选择 k = 3 进行一次煎饼翻转，反转子数组 [3,2,1] ，得到 arr = [1,2,3,4] 。

以数组形式返回能使 arr 有序的煎饼翻转操作所对应的 k 值序列。
任何将数组排序且翻转次数在 10 * arr.length 范围内的有效答案都将被判断为正确。

示例 1：
输入：[3,2,4,1]
输出：[4,2,4,3]
解释：
我们执行 4 次煎饼翻转，k 值分别为 4，2，4，和 3。
初始状态 arr = [3, 2, 4, 1]
第一次翻转后（k = 4）：arr = [1, 4, 2, 3]
第二次翻转后（k = 2）：arr = [4, 1, 2, 3]
第三次翻转后（k = 4）：arr = [3, 2, 1, 4]
第四次翻转后（k = 3）：arr = [1, 2, 3, 4]，此时已完成排序。 

示例 2：
输入：[1,2,3]
输出：[]
解释：
输入已经排序，因此不需要翻转任何内容。
请注意，其他可能的答案，如 [3，3] ，也将被判断为正确。
 */

#include <stdio.h>
#include <stdlib.h>

// 翻转数组的前 arrSize 个元素
void reverse(int* arr, int arrSize) {
    for (int left = 0, right = arrSize - 1; left < right; left++, right--) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}

// 煎饼排序函数
int* pancakeSort(int* arr, int arrSize, int* returnSize) {
    int* ret = (int*)malloc(sizeof(int) * (arrSize - 1) * 2);
    int retSize = 0;
    for (int n = arrSize; n > 1; n--) {
        int index = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[index]) {
                index = i;
            }
        }
        if (index == n - 1) {
            continue;
        }
        reverse(arr, index + 1);
        reverse(arr, n);
        ret[retSize++] = index + 1;
        ret[retSize++] = n;
    }
    *returnSize = retSize;
    return ret;
}

// 打印数组
void printArray(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 打印翻转操作序列
void printOperations(int* operations, int operationsSize) {
    for (int i = 0; i < operationsSize; i++) {
        printf("%d ", operations[i]);
    }
    printf("\n");
}

// 主函数
int main() {
    int arr[] = {3, 2, 4, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int returnSize = 0;

    int* operations = pancakeSort(arr, arrSize, &returnSize);

    printf("排序后的数组: ");
    printArray(arr, arrSize);

    printf("翻转操作序列: ");
    printOperations(operations, returnSize);

    free(operations);
    return 0;
}
