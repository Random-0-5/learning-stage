/*给定一个单词，如果该单词以er、ly或者ing后缀结尾， 
则删除该后缀（题目保证删除后缀后的单词长度不为0）， 否则不进行任何操作。

输入
输入一行，包含一个单词（单词中间没有空格，每个单词最大长度为32）。
输出
输出按照题目要求处理后的单词。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_word(char *word) {
    int len = strlen(word);
    
    // 检查后缀并删除
    if (len > 3 && strcmp(word + len - 3, "ing") == 0) {
        word[len - 3] = '\0'; // 删除 "ing"
    } else if (len > 2 && strcmp(word + len - 2, "ly") == 0) {
        word[len - 2] = '\0'; // 删除 "ly"
    } else if (len > 2 && strcmp(word + len - 2, "er") == 0) {
        word[len - 2] = '\0'; // 删除 "er"
    }
}

int main() {
    char word[33]; // 定义数组，最大长度为32，加1留给结束符
    // 输入单词
    scanf("%s", word);
    
    // 处理单词
    process_word(word);
    
    // 输出处理后的单词
    printf("%s\n", word);

    return 0;
}

