/*游戏规则：石头打剪刀，布包石头，剪刀剪布。
现在，需要你写一个程序来判断石头剪子布游戏的结果。
输入包括N+1行：
第一行是一个整数N，表示一共进行了N次游戏。1 <= N <= 100。
接下来N行的每一行包括两个字符串，表示游戏参与者Player1，Player2的选择（石头、剪子或者是布）：
S1 S2
字符串之间以空格隔开S1,S2只可能取值在{"Rock", "Scissors", "Paper"}（大小写敏感）中。
输出包括N行，每一行对应一个胜利者（Player1或者Player2），或者游戏出现平局，则输出Tie。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 10 // 定义每个字符串的最大长度

// 判断结果的函数
const char* determine_winner(const char* player1, const char* player2) {
    if (strcmp(player1, player2) == 0) {
        return "Tie"; // 平局
    } else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
               (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
               (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return "Player1"; // Player1 胜
    } else {
        return "Player2"; // Player2 胜
    }
}

int main(void) {
    int rounds;
    scanf("%d", &rounds);
    
    // 为每个字符串分配足够空间
    char* round1 = (char*)malloc(rounds * MAX_STRING_LENGTH * sizeof(char));
    char* round2 = (char*)malloc(rounds * MAX_STRING_LENGTH * sizeof(char));
    
    if (round1 == NULL || round2 == NULL) {
        printf("内存分配失败\n");
        return 1; // 返回错误代码
    }

    // 读取每一轮的选择
    for (int i = 0; i < rounds; i++) {
        scanf("%s", round1 + i * MAX_STRING_LENGTH);
        scanf("%s", round2 + i * MAX_STRING_LENGTH);
    }

    // 输出结果
    for (int i = 0; i < rounds; i++) {
        const char* result = determine_winner(round1 + i * MAX_STRING_LENGTH, round2 + i * MAX_STRING_LENGTH);
        printf("%s\n", result);
    }

    // 释放分配的内存
    free(round1);
    free(round2);
    
    return 0;
}

