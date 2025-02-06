/*输入两个字符串，验证其中一个串是否为另一个串的子串。

输入
输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
输出
若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2)
否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1)
否则，输出 No substring。*/

/*输入两个字符串，验证其中一个串是否为另一个串的子串。

输入
输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
输出
若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2)
否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1)
否则，输出 No substring。*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // 去掉换行符
    str2[strcspn(str2, "\n")] = 0; // 去掉换行符

    // 判断子串关系
    if (strstr(str2, str1) != NULL) {
        // str1是str2的子串
        printf("%s is substring of %s\n", str1, str2);
    } else if (strstr(str1, str2) != NULL) {
        // str2是str1的子串
        printf("%s is substring of %s\n", str2, str1);
    } else {
        // 都不是
        printf("No substring\n");
    }
    
    // 释放内存
    free(str1);
    free(str2);
    
    return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // 去掉换行符
    str2[strcspn(str2, "\n")] = 0; // 去掉换行符

    // 判断子串关系
    if (strstr(str2, str1) != NULL) {
        // str1是str2的子串
        printf("%s is substring of %s\n", str1, str2);
    } else if (strstr(str1, str2) != NULL) {
        // str2是str1的子串
        printf("%s is substring of %s\n", str2, str1);
    } else {
        // 都不是
        printf("No substring\n");
    }
    
    // 释放内存
    free(str1);
    free(str2);
    
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // 去掉换行符
    str2[strcspn(str2, "\n")] = 0; // 去掉换行符

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    int found = 0; // 标志变量，标识是否找到子串

    // 判断str1是否为str2的子串
    for (size_t i = 0; i <= len2 - len1; i++) {
        if (strncmp(&str2[i], str1, len1) == 0) {
            printf("%s is substring of %s\n", str1, str2);
            found = 1;
            break;
        }
    }

    // 如果没有找到，判断str2是否为str1的子串
    if (!found) {
        for (size_t i = 0; i <= len1 - len2; i++) {
            if (strncmp(&str1[i], str2, len2) == 0) {
                printf("%s is substring of %s\n", str2, str1);
                found = 1;
                break;
            }
        }
    }

    // 如果都没有找到
    if (!found) {
        printf("No substring\n");
    }

    // 释放内存
    free(str1);
    free(str2);

    return 0;
}
*/
