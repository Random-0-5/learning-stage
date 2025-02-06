#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;

    int dp[n + 1];  // �����������洢�Ѽ����ֵ
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];  // ����֮ǰ�Ľ�����㵱ǰ���
    }
    
    return dp[n];
}

int main() {
    int n = 10;
    printf("쳲��������еĵ� %d ���� %d\n", n, fib(n));
    return 0;
}
