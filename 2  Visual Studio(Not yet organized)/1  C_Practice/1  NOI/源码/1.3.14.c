#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b, c;
    c = n / 100;
    b = (n / 10) % 10;
    a = n % 10;

    printf("%d%d%d\n", a, b, c);

    return 0;
}
