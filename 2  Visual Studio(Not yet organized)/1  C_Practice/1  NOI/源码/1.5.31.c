/*假设有N盏灯(N为不大于5000的正整数)，从1到N按顺序依次编号，初始时全部处于开启状态；有M个人(M为不大于N的正整数)也从1到M依次编号。
第一个人（1号）将灯全部关闭，第二个人（2号）将编号为2的倍数的灯打开，第三个人（3号）将编号为3的倍数的灯做相反处理（即，将打开的灯关闭，将关闭的灯打开）。
依照编号递增顺序，以后的人都和3号一样，将凡是自己编号倍数的灯做相反处理。
请问：当第M个人操作之后，哪几盏灯是关闭的，按从小到大输出其编号，其间用逗号间隔。
输入
输入正整数N和M，以单个空格隔开。
输出
顺次输出关闭的灯的编号，其间用逗号间隔。*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("请按要求输入m(人数),n（灯数）(空格隔开): ");
    while (1) {
        if (scanf("%d %d", &m, &n) != 2) {
            printf("输入无效，请输入两个正整数，格式如下: m n: ");
            while (getchar() != '\n'); 
        }
        else if (m > n) {
            printf("输入无效，请确保 m <= n。请重新输入: ");
        }
        else if (m < 1 || n < 1) {
            printf("输入无效，请确保 m 和 n 都是正整数。请重新输入: ");
        }
        else {
            break; 
        }
    }

    int *open = (int *)malloc((n + 1) * sizeof(int)); 
    if (open == NULL) {
        printf("内存分配失败\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        open[i] = 1; 
    }

    for (int i = 1; i <= m; i++) {
        if (i == 1) {         
            for (int j = 1; j <= n; j++) {
                open[j] = 0; 
            }
        } 
        else {      
            for (int j = i; j <= n; j += i) {
                open[j] = 1 - open[j]; 
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (open[i] == 0) { 
            printf("%d,", i);      
        }
    }
    
    printf("\b");
    free(open); 
    return 0;
}
