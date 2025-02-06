/*有一个分数序列 q1/p1,q2/p2,q3/p3,q4/p4,q5/p5,.... ,其中qi+1= qi+ pi, pi+1=qi, p1= 1, q1= 2。
比如这个序列前6项分别是2/1,3/2,5/3,8/5,13/8,21/13。求这个分数序列的前n项之和。*/

#include<stdio.h>

int main() {
    int n;
    printf("输入数组的大小: ");
    scanf("%d", &n);

    int*moleculers = (int*)malloc(n * sizeof(int));
    if (moleculers == NULL) {
        printf("内存分配失败!\n");
        return 1;
    }
    int* denominator = (int*)malloc(n * sizeof(int));
    if (denominator == NULL) {
        printf("内存分配失败!\n");
        return 1;
    }

    moleculers[1] = 2;
    denominator[1] = 1;
    for (int i = 1; i <= n; i++) {
        denominator[i+1] = moleculers[i];
        moleculers [i+1] = moleculers[i] + denominator[i];
    }



    free(moleculers);
    free(denominator);
    return 0;
}
