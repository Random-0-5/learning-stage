/*输入一行字符，统计出其中数字字符的个数。
输入
一行字符串，总长度不超过255。
输出
输出为1行，输出字符串里面数字字符的个数。*/

#include <stdio.h>

int main(void) {
    char character[256];  // 字符数组，长度为256以容纳字符串和结尾字符
    int count = 0;  // 用于统计数字字符的个数

    // 输入字符串
    printf("请输入字符串（总长度不超过255个字符）：");
    fgets(character, sizeof(character), stdin);  // 使用fgets读取一行字符

    // 遍历字符串，统计数字字符
    for (int i = 0; character[i] != '\0'; i++) {
        if (character[i] >= '0' && character[i] <= '9') {  // 检查是否是数字字符
            count++;
        }
    }

    // 输出数字字符的个数
    printf("%d\n", count);

    return 0;
}