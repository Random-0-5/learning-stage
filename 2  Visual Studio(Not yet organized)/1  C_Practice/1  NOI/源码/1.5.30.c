/*输入两个正整数 m 和 k，其中1 < m < 100000，1 < k < 5 ，判断 m 能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。
例如，输入：43833 3
满足条件，输出YES。
如果输入：39331 3
尽管有3个3，但不能被19整除，也不满足条件，应输出NO。*/

#include <stdio.h>

int main() {
    int m, k;
    int countOf3 = 0;

    printf("请输入m和k的值（空格隔开）：");
    scanf("%d %d", &m, &k);

    // 统计 m 中数字 '3' 的个数
    int temp = m;
    while (temp > 0) {
        if (temp % 10 == 3) {
            countOf3++;
        }
        temp /= 10;
    }

    // 判断条件
    if (countOf3 == k && m % 19 == 0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}
