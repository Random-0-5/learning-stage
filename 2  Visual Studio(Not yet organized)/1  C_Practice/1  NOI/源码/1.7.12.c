/*小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。
在药房实习期间，小英扎实的专业基础获得了医生的一致好评，得知小英在计算概论中取得过好成绩后，
主任又额外交给她一项任务，解密抗战时期被加密过的一些伤员的名单。
经过研究，小英发现了如下加密规律（括号中是一个“原文 -> 密文”的例子）
1.  原文中所有的字符都在字母表中被循环左移了三个位置（dec  -> abz）
2.  逆序存储（abcd -> dcba ）
3.  大小写反转（abXY -> ABxy）

输入
一个加密的字符串。（长度小于50且只包含大小写字母）
输出
输出解密后的字符串。 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // 添加这个头文件以使用 tolower 和 toupper

#define len_max 50

int main(void) {
    char* ciphertext = (char*)malloc(len_max * sizeof(char));
    fgets(ciphertext, len_max, stdin);

    ciphertext[strcspn(ciphertext, "\n")] = 0; // 去掉末尾的换行符
    size_t len = strlen(ciphertext);

    // 1. 反转大小写
    for (int i = 0; i < len; i++) {
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
            ciphertext[i] = toupper(ciphertext[i]); // 使用 toupper 函数
        } else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            ciphertext[i] = tolower(ciphertext[i]); // 使用 tolower 函数
        }
    }

    // 2. 逆序存储
    for (int i = 0; i < len / 2; i++) {
        char temp = ciphertext[i];
        ciphertext[i] = ciphertext[len - 1 - i];
        ciphertext[len - 1 - i] = temp;
    }

    // 3. 左移三位（解密）
    for (int i = 0; i < len; i++) {
        if ((ciphertext[i] >= 'a' && ciphertext[i] <= 'z')) {
            ciphertext[i] -= 3; 
            if (ciphertext[i] < 'a') {
                ciphertext[i] += 26; // 循环到字母表末尾
            }
        } else if ((ciphertext[i] >= 'A' && ciphertext[i] <= 'Z')) {
            ciphertext[i] -= 3; 
            if (ciphertext[i] < 'A') {
                ciphertext[i] += 26; // 循环到字母表末尾
            }
        }
    }

    // 输出解密后的字符串
    printf("%s\n", ciphertext);

    free(ciphertext); // 释放动态分配的内存
    return 0;
}
