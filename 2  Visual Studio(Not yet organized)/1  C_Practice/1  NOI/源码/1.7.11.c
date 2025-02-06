#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char encrypted[101], original[101], newEncrypted[101];
    char mapping[ALPHABET_SIZE] = {0}; // 用于存储映射
    int used[ALPHABET_SIZE] = {0}; // 标记已使用的密字
    int i, length;

    // 输入加密信息及其对应的原信息
    scanf("%s", encrypted);
    scanf("%s", original);
    scanf("%s", newEncrypted);

    length = strlen(encrypted);

    // 1. 建立映射关系
    for (i = 0; i < length; i++) {
        char orgChar = original[i];
        char encChar = encrypted[i];
        int orgIndex = orgChar - 'A'; // 字母索引
        int encIndex = encChar - 'A';

        // 检查映射和冲突
        if (mapping[orgIndex] == 0) {
            // 如果没有映射，进行添加
            mapping[orgIndex] = encChar;
            used[encIndex] = 1; // 标记密字已被使用
        } else if (mapping[orgIndex] != encChar) {
            // 如果已经有映射并且不同，则出错
            printf("Failed\n");
            return 0;
        }
    }

    // 2. 检查是否所有字母都出现
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (mapping[i] == 0) {
            printf("Failed\n");
            return 0;
        }
    }

    // 3. 翻译电报中的加密信息
    for (i = 0; newEncrypted[i] != '\0'; i++) {
        char newChar = newEncrypted[i];
        int newIndex = newChar - 'A';
        putchar(mapping[newIndex]);
    }
    putchar('\n'); // 输出换行

    return 0;
}
