#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;

    int dp[n + 1];  // 创建数组来存储已计算的值
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];  // 利用之前的结果计算当前结果
    }
    
    return dp[n];
}

int main() {
    int n = 10;
    printf("斐波那契数列的第 %d 项是 %d\n", n, fib(n));
    return 0;
}
