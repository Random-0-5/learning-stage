#include <stdio.h>
#include <string.h>

#define MAX_N 120000  // 定义最大单词数为 120000
#define MAX_LENGTH 21 // 定义单词的最大长度为 21

char words[MAX_N][MAX_LENGTH]; // 声明一个二维数组，用于存储最多 120000 个单词，每个单词最长 20 个字符（加上一个结束符 '\0'）。

int find_start_index(int n, const char* prefix) {
    int low = 0, high = n; // 初始化二分查找的范围
    while (low < high) {
        int mid = (low + high) / 2; // 计算中间位置
        if (strcmp(words[mid], prefix) < 0) { // 如果中间单词小于前缀
            low = mid + 1; // 移动到右半部分
        }
        else {
            high = mid; // 移动到左半部分
        }
    }
    return low; // 返回找到的开始索引
}

// 二分查找：找第一个以 prefix 加上一个字符（在这里是 'z'）开头的单词的位置
int find_end_index(int n, const char* prefix) {
    char next_prefix[MAX_LENGTH]; // 声明一个数组来存储下一个前缀
    strcpy(next_prefix, prefix); // 将前缀复制到 next_prefix
    next_prefix[strlen(prefix)] = 'z' + 1; // 添加入超出 'z' 的字符
    next_prefix[strlen(prefix) + 1] = '\0'; // 确保字符串以 '\0' 结束

    int low = 0, high = n; // 初始化二分查找的范围
    while (low < high) {
        int mid = (low + high) / 2; // 计算中间位置
        if (strcmp(words[mid], next_prefix) < 0) { // 如果中间单词小于下一个前缀
            low = mid + 1; // 移动到右半部分
        }
        else {
            high = mid; // 移动到左半部分
        }
    }
    return low; // 返回找到的结束索引
}

int main() {
    int N; // 声明一个变量 N，用于存储字典中的单词数
    scanf("%d", &N); // 从输入中读取单词数量

    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]); // 循环读取每个单词
    }

    char A[MAX_LENGTH]; // 声明一个数组 A 用于存储输入的前缀
    scanf("%s", A); // 从输入中读取前缀

    int start_index = find_start_index(N, A); // 查找以 A 开头的单词的开始索引
    int end_index = find_end_index(N, A); // 查找以 A 开头的单词的结束索引

    printf("%d\n", end_index - start_index); // 输出以 A 为前缀的单词数量

    return 0; // 程序结束
}