/*把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。
输入
只有一行，由一个字符串和两个字符组成，中间用单个空格隔开。
字符串是待替换的字符串，字符串长度小于等于30个字符，且不含空格等空白符；
接下来一个字符为需要被替换的特定字符；
接下来一个字符为用于替换的给定字符*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_MAX 31

int main(void) {
    char str[LEN_MAX];
    char replaced_begin, replaced_end;

    // 读取输入
    fgets(str, LEN_MAX, stdin);

    // 从输入中提取前一个字符串后，读取需要替换的字符
    sscanf(str + strlen(str) - 4, "%c %c", &replaced_begin, &replaced_end);
    
    // 在字符串末尾添加结束符
    str[strcspn(str, "\n")] = '\0'; // 去掉换行符

    // 进行字符替换
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == replaced_begin) {
            str[i] = replaced_end;
        }
    }

    str[strlen(str)-4] = '\0';
    // 打印替换后的字符串
    printf("%s\n", str);

    return 0;
}
