/*为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的DNA进行比对，以判断该比对的DNA是否具有相关性。
现比对两条长度相同的DNA序列。首先定义两条DNA序列相同位置的碱基为一个碱基对，
如果一个碱基对中的两个碱基相同的话，则称为相同碱基对。接着计算相同碱基对占总碱基对数量的比例，
如果该比例大于等于给定阈值时则判定该两条DNA序列是相关的，否则不相关。
输入
有三行，第一行是用来判定出两条DNA序列是否相关的阈值，随后2行是两条DNA序列（长度不大于500）。
输出
若两条DNA序列相关，则输出“yes”，否则输出“no”。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 500;  // 最大长度定义
    float count = 0.0; // 相同碱基对计数
    float threshold;

    // 输入阈值
    printf("请输入判断相关性的阈值（0到1之间）：");
    scanf("%f", &threshold);
    getchar(); // 清除输入缓冲区中的换行符

    // 动态分配内存
    char* gene1 = (char*)malloc(size * sizeof(char));
    char* gene2 = (char*)malloc(size * sizeof(char)); // 设定长度相同

    // 检查内存分配是否成功
    if (gene1 == NULL || gene2 == NULL) {
        fprintf(stderr, "内存分配失败\n");
        return 1; // 程序异常退出
    }

    // 输入两条DNA序列
    printf("请输入第一条DNA序列：");
    fgets(gene1, size, stdin);
    printf("请输入第二条DNA序列：");
    fgets(gene2, size, stdin);

    // 去除换行符
    gene1[strcspn(gene1, "\n")] = 0;
    gene2[strcspn(gene2, "\n")] = 0;

    // 确定实际长度
    int len1 = strlen(gene1);
    int len2 = strlen(gene2);

    // 检查长度是否相同
    if (len1 != len2) {
        printf("输入的DNA序列长度不一致，请确保两条序列长度相同。\n");
        free(gene1);
        free(gene2);
        return 1; // 程序结束
    }

    // 计算相同碱基对的数量
    for (int i = 0; i < len1; i++) {
        if (gene1[i] == gene2[i]) // 使用实际长度进行比较
            count++;
    }

    // 判断相关性并输出
    if (count / len1 >= threshold)
        printf("yes\n");
    else
        printf("no\n");

    // 释放内存
    free(gene1);
    free(gene2);

    return 0;
}
