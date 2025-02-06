/*给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。
输入
一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
输出
输出一行，表示序列的最大跨度值。*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* numbers = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_num = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    int min_num = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
    }

    int span = max_num - min_num;
    printf("%d\n", span);

    free(numbers);
    return 0;
}