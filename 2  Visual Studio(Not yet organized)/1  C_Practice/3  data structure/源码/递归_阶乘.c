#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; // �������
    } else {
        return n * factorial(n - 1); // �ݹ����
    }
}

int main() {
    int num = 5;
    printf("%d �Ľ׳��� %d\n", num, factorial(num));
    return 0;
}
