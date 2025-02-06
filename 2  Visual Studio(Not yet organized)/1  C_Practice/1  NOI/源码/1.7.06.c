/*给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号（注：题目保证这些字符串一定不是C语言的保留字）。

C语言标识符要求：

1. 非保留字；
2. 只包含字母、数字及下划线（“_”）。
3. 不以数字开头。

输入
一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。
输出
一行，如果它是C语言的合法标识符，则输出yes，否则输出no。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define strlen_max 21  // 最长字符串长度加1以容纳结束符

int main(void) {
    char* str = (char*)malloc(strlen_max * sizeof(char));
    
    // 读取输入字符串
    fgets(str, strlen_max, stdin);
    str[strcspn(str, "\n")] = 0;  // 移除换行符
    size_t len = strlen(str);
    
    // 检查长度是否为0（尽管题目保证不为空）
    if (len == 0) {
        printf("no");
        free(str);
        return 0;
    }

    // 检查是否是合法的标识符
    if (str[0] >= '0' && str[0] <= '9') {
        printf("no");
    } else {
        int is_valid = 1;  // 标识符有效性初始化

        for (size_t i = 0; i < len; i++) {
            // 判断字符是否是字母、数字或下划线
            if (!( (str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= 'a' && str[i] <= 'z') || 
                   (str[i] >= '0' && str[i] <= '9') || 
                   (str[i] == '_') )) 
            {
                is_valid = 0;  // 发现无效字符
                break;
            }
        }

        if (is_valid) {
            printf("yes");
        } else {
            printf("no");
        }
    }

    free(str);
    return 0;
}
