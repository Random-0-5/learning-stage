/*已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数。
输入只有一行，包含一个正整数 n。
对于60%的数据，6 ≤ n ≤ 1000。
对于100%的数据，6 ≤ n ≤ 2*10^9。
输出只有一行，包含一个正整数 p，即较大的那个质数。*/

#include <stdio.h>

// 函数：判断一个数是否为质数
int is_prime(int num) {
    if (num <= 1) return 0; // 1 或更小的数字不是质数
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 不是质数
        }
    }
    return 1; // 是质数
}

int main() {
    long long n; // 使用 long long 以支持较大的输入范围
    scanf("%lld", &n);

    // 从2开始检查质因数
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) { // 找到一个因数 i
            long long first_prime = i;
            long long second_prime = n / i;

            // 需要确保两个质数是不同的
            if (first_prime != second_prime) {
                // 检查两个质数是否有效
                if (is_prime(first_prime) && is_prime(second_prime)) {
                    printf("%lld\n", second_prime > first_prime ? second_prime : first_prime);
                    return 0; // 找到后立即返回
                }
            }
        }
    }

    // 如果没有找到适合的质数对
    printf("没有找到两个不同的质数的乘积\n");
    return 0;
}
