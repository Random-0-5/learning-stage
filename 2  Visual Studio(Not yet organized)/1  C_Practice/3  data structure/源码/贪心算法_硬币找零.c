#include <stdio.h>

int coin_change(int coins[], int m, int amount) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            count++;
        }
    }
    return count;
}

int main() {
    int coins[] = {25, 10, 5, 1};  // Ӳ�����
    int m = sizeof(coins) / sizeof(coins[0]);
    int amount = 63;  // ��Ҫ����Ľ��

    int result = coin_change(coins, m, amount);
    printf("���������Ӳ������Ϊ %d\n", result);
    return 0;
}
