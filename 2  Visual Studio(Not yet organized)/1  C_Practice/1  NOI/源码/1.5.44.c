/*输入一个正整数n，求第n小的质数。
输入
一个不超过10000的正整数n。*/

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; // 1 或更小的数字不是质数
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 不是质数
        }
    }
    return 1; // 是质数
}

int main(void) {
    int n, count = 0; // n 是要求找到的质数的序号
    scanf("%d", &n);

    // 从 2 开始检查质数
    int i;
    for ( i = 2; count < n; i++) {
        if (is_prime(i)) {
            count++; // 找到一个质数
        }
    }

    // 当循环结束时，i 就是第 n 个质数
    // 由于最后一次循环时 i + 1 我们需要在这里的 i-1 打印
    printf("%d\n", i - 1);

    return 0;
}
