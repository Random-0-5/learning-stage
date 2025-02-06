/*石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。
一天，小A和小B正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，
比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，就是以“石头-布-石头-剪刀”为周期不断循环的。请问，小A和小B比了N轮之后，谁赢的轮数多？
输入包含三行。
第一行包含三个整数：N，NA，NB，分别表示比了N轮，小A出拳的周期长度，小B出拳的周期长度。0 < N,NA,NB < 100。
第二行包含NA个整数，表示小A出拳的规律。
第三行包含NB个整数，表示小B出拳的规律。
其中，0表示“石头”，2表示“剪刀”，5表示“布”。相邻两个整数之间用单个空格隔开。
输出
输出一行，如果小A赢的轮数多，输出A；如果小B赢的轮数多，输出B；如果两人打平，输出draw。*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, na, nb;
    scanf("%d %d %d", &n, &na, &nb); // 读取N, NA, NB

    int* combination1 = (int*)malloc(na * sizeof(int)); // 小A的出拳组合
    int* combination2 = (int*)malloc(nb * sizeof(int)); // 小B的出拳组合

    // 读取小A的出拳规律
    for (int i = 0; i < na; i++) {
        scanf("%d", &combination1[i]);
    }
    // 读取小B的出拳规律
    for (int i = 0; i < nb; i++) {
        scanf("%d", &combination2[i]);
    }

    int aWins = 0, bWins = 0; // 初始化胜利计数

    // 比赛N轮
    for (int i = 0; i < n; i++) {
        int aMove = combination1[i % na]; // 小A的出拳
        int bMove = combination2[i % nb]; // 小B的出拳

        // 判断胜负
        if (aMove == bMove) {
            continue; // 平局，不计分
        } else if ((aMove == 0 && bMove == 2) || // A出石头，B出剪刀
                   (aMove == 2 && bMove == 5) || // A出剪刀，B出布
                   (aMove == 5 && bMove == 0)) { // A出布，B出石头
            aWins++; // 小A赢
        } else {
            bWins++; // 小B赢
        }
    }

    // 输出结果
    if (aWins > bWins) {
        printf("A\n");
    } else if (bWins > aWins) {
        printf("B\n");
    } else {
        printf("draw\n");
    }

    // 释放动态分配的内存
    free(combination1);
    free(combination2);

    return 0;
}
