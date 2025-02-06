#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; // 基本情况
    } else {
        return n * factorial(n - 1); // 递归调用
    }
}

int main() {
    int num = 5;
    printf("%d 的阶乘是 %d\n", num, factorial(num));
    return 0;
}
