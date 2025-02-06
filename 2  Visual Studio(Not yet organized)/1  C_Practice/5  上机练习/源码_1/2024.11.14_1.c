/*假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

输入：n = 3
输出：3
解释：有三种方法可以爬到楼顶。
1. 1 阶 + 1 阶 + 1 阶
2. 1 阶 + 2 阶
3. 2 阶 + 1 阶*/

#include <stdio.h>
#include <stdlib.h> 

int main(void) {
    int n;
    scanf("%d", &n);

    int* methods = (int*)malloc((n+1) * sizeof(int));  // 动态分配内存
    
    methods[1] = 1;  // 1阶的爬法
    methods[2] = 2;  // 2阶的爬法

    for (int i = 3; i <= n; i++) {
        methods[i] = methods[i - 1] + methods[i - 2];  
    }

    printf("%d\n", methods[n]);  // 输出爬到第n阶的方法数量

    free(methods);  // 释放动态分配的内存
    return 0;
}

