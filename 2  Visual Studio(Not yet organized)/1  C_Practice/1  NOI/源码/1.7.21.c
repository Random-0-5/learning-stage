/*输入一个字符串，以回车结束（字符串长度<=100）。该字符串由若干个单词组成，单词之间用一个空格隔开，
所有单词区分大小写。现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。

输入
输入包括3行，
第1行是包含多个单词的字符串 s;
第2行是待替换的单词a(长度 <= 100);
第3行是a将被替换的单词b(长度 <= 100).

s, a, b 最前面和最后面都没有空格.
输出
输出只有 1 行，将s中所有单词a替换成b之后的字符串。*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN_MAX 100

// 函数用于替换字符串中的单词
void replace_word(char *str, const char *word1, const char *word2) {
    char *pos = strstr(str, word1); // 找到第一个 word1 的位置
    int word1_len = strlen(word1);
    int word2_len = strlen(word2);
    
    while (pos) {
        // 创建新的字符串来存放替换后的结果
        char new_str[LEN_MAX];
        
        // 复制到 new_str 中替换 word1
        strncpy(new_str, str, pos - str); // 从原始字符串开头到 word1 的起始位置
        new_str[pos - str] = '\0'; // 加上字符串结束符
        
        // 添加 word2
        strcat(new_str, word2);
        
        // 添加 word1 之后的部分
        strcat(new_str, pos + word1_len);
        
        // 复制回原始字符串
        strcpy(str, new_str);
        
        // 继续查找下一个 word1
        pos = strstr(str, word1);
    }
}

int main(void) {
    char str[LEN_MAX]; // 原始字符串
    char word1[LEN_MAX]; // 待替换的单词
    char word2[LEN_MAX]; // 替换后的单词

    // 输入原始字符串
    fgets(str, LEN_MAX, stdin);
    // 输入待替换的单词
    fgets(word1, LEN_MAX, stdin);
    // 输入替换后的单词
    fgets(word2, LEN_MAX, stdin);

    // 去掉字符串末尾的换行符
    str[strcspn(str, "\n")] = 0;
    word1[strcspn(word1, "\n")] = 0;
    word2[strcspn(word2, "\n")] = 0;

    // 调用替换函数
    replace_word(str, word1, word2);

    // 输出替换后的结果
    printf("%s\n", str);

    return 0;
}

