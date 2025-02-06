/*编写程序，输入n的值，求 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - 1/8 + ... + (-1)n-1·1/n 的值。
输入一个正整数n。1 <= n <= 1000。
输出一个实数，为表达式的值，保留到小数点后四位。*/

#include <stdio.h>

int main(void) {
    int n;
    double sum = 0;
    printf("请输入一个正整数：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i; 
        } else {
            sum += 1.0 / i; 
        }
    }

    printf("%.4lf\n", sum);
    return 0;
}
