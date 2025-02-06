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
    int coins[] = {25, 10, 5, 1};  // 硬币面额
    int m = sizeof(coins) / sizeof(coins[0]);
    int amount = 63;  // 需要找零的金额

    int result = coin_change(coins, m, amount);
    printf("找零的最少硬币数量为 %d\n", result);
    return 0;
}
