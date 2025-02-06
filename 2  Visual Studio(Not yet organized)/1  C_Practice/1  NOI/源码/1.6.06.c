/*某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。
我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。

由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。
已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。
你的任务是计算将这些树都移走后，马路上还有多少棵树。

输入
第一行有两个整数L（1 <= L <= 10000）和 M（1 <= M <= 100），L代表马路的长度，M代表区域的数目，L和M之间用一个空格隔开。
接下来的M行每行包含两个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标。
对于20%的数据，区域之间没有重合的部分；
对于其它的数据，区域之间有重合的情况。

输出
包括一行，这一行只包含一个整数，表示马路上剩余的树的数目*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int L, M;
    // 输入马路长度和区域数量
    scanf("%d %d", &L, &M);

    // 动态分配内存，表示树的状态，1表示树存在，0表示树被移走
    int* trees = (int*)malloc((L + 1) * sizeof(int));

    // 初始化所有树为存在
    for (int i = 0; i <= L; i++) {
        trees[i] = 1;
    }

    // 处理每个区域，移除区域内的树
    for (int i = 0; i < M; i++) {
        int start, end;
        scanf("%d %d", &start, &end);

        // 确保 start 小于 end
        if (start > end) {
            int temp = start;
            start = end;
            end = temp;
        }

        // 移除区域内的树
        for (int j = start; j <= end; j++) {
            trees[j] = 0; // 将区域内的树标记为移走
        }
    }

    // 计算剩余树的数量
    int remainingTrees = 0;
    for (int i = 0; i <= L; i++) {
        if (trees[i] == 1) { // 如果树存在，计数
            remainingTrees++;
        }
    }

    // 输出剩余的树的数量
    printf("%d\n", remainingTrees);

    // 释放动态分配的内存
    free(trees);
    
    return 0;
}
