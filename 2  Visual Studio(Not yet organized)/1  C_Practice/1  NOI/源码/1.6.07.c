/*一个长度为n（n>0）的序列中存在“有趣的跳跃”当前仅当相邻元素的差的绝对值经过排序后正好是从1到(n-1)。
例如，1 4 2 3存在“有趣的跳跃”，因为差的绝对值分别为3,2,1。当然，任何只包含单个元素的序列一定存在“有趣的跳跃”。
你需要写一个程序判定给定序列是否存在“有趣的跳跃”。
输入
一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，各元素的绝对值均不超过1,000,000,000。
输出
一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int n;
    scanf("%d", &n);

    // 动态分配内存
    int* numbers = (int*)malloc(n * sizeof(int));
    if (numbers == NULL) {
        return 1; // 内存分配失败
    }

    // 读取序列中的每个元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // 如果只有一个元素，直接输出 Jolly
    if (n == 1) {
        printf("Jolly\n");
        free(numbers);
        return 0;
    }

    // 创建一个数组存储绝对差
    int* diffs = (int*)malloc((n - 1) * sizeof(int));
    if (diffs == NULL) {
        free(numbers);
        return 1; // 内存分配失败
    }

    // 计算绝对差
    for (int i = 0; i < n - 1; i++) {
        diffs[i] = abs(numbers[i + 1] - numbers[i]);
    }

    // 用于标记差的绝对值是否存在
    bool* exists = (bool*)calloc(n, sizeof(bool));
    if (exists == NULL) {
        free(numbers);
        free(diffs);
        return 1; // 内存分配失败
    }

    // 标记有效的差的绝对值
    for (int i = 0; i < n - 1; i++) {
        if (diffs[i] > 0 && diffs[i] < n) {
            exists[diffs[i]] = true; // 标记该差的绝对值存在
        }
    }

    // 检查是否所有的 1 到 (n-1) 都存在
    bool isJolly = true;
    for (int i = 1; i < n; i++) {
        if (!exists[i]) {
            isJolly = false;
            break;
        }
    }

    // 输出结果
    if (isJolly) {
        printf("Jolly\n");
    } else {
        printf("Not jolly\n");
    }

    // 释放动态分配的内存
    free(numbers);
    free(diffs);
    free(exists);

    return 0;
}
