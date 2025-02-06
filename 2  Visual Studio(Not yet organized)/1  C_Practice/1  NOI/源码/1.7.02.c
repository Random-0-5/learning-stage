/*给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
输入
一个字符串，长度小于100000。
输出
输出第一个仅出现一次的字符，若没有则输出no。*/

#include <stdio.h>
#include <stdlib.h>

#define ALPHABET_SIZE 26  // 小写字母的数量

int main(void) {
    char str[100001];
    int count[ALPHABET_SIZE] = {0};  // 计数数组用于存储每个字符的出现次数

    // 输入字符串
    printf("请输入一个字符串（长度小于100000）：");
    fgets(str, sizeof(str), stdin);  // 获取输入

    // 统计每个字符的频率
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count[str[i] - 'a']++;  // 增加对应字母的计数
    }

    // 找到第一个仅出现一次的字符
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (count[str[i] - 'a'] == 1) {  // 如果该字符只出现过一次
            printf("%c\n", str[i]);  // 输出该字符
            return 0;  // 找到后退出
        }
    }

    // 如果没有找到，输出 "no"
    printf("no\n");
    return 0;
}
