/*某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，
按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。
输入
共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
输出
按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n; // 病人的数目
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0; // 各年龄段的计数

    // 输入病人数量
    scanf("%d", &n);
    int *ages = (int *)malloc(n * sizeof(int)); // 动态分配内存用于存储年龄

    // 输入每个病人的年龄
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]); // 读取每一个病人的年龄
    }

    // 统计各年龄段的患病人数
    for (int i = 0; i < n; i++) {
        if (ages[i] >= 0 && ages[i] <= 18) {
            count1++;
        } else if (ages[i] >= 19 && ages[i] <= 35) {
            count2++;
        } else if (ages[i] >= 36 && ages[i] <= 60) {
            count3++;
        } else if (ages[i] >= 61) {
            count4++;
        }
    }

    // 输出每个年龄段的比例
    printf("%.2f%%\n", (count1 / (float)n) * 100); // 0-18
    printf("%.2f%%\n", (count2 / (float)n) * 100); // 19-35
    printf("%.2f%%\n", (count3 / (float)n) * 100); // 36-60
    printf("%.2f%%\n", (count4 / (float)n) * 100); // 61及以上

    // 释放动态分配的内存
    free(ages);
    
    return 0;
}
