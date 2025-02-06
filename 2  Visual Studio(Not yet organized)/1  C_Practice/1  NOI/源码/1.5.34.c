/*给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!）
输入有一行，包含一个正整数n（1 < n < 12）。
输出有一行：阶乘的和。*/

#include <stdio.h>

int main() {
    int n, factorial, sum = 0;
    printf("请输入一个非负整数：");
    scanf("%d", &n);

    if (n < 0) {
        printf("负数没有阶乘！\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) { 
        factorial = 1; 
        for (int j = 1; j <= i; j++) { 
            factorial *= j;
        }
        sum += factorial; // 累加到 sum
    }

    printf("阶乘和为：%d\n", sum); // 输出结果
    return 0;
}
