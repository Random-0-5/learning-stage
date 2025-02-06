#include <stdio.h>
#include <string.h>

void concatenateStrings(char* str1, char* str2, char* result) {
    strcpy(result, str1);
    strcat(result, str2);
}

int main() {
    char inputStr1[100];
    char inputStr2[100];
    char result[200];

    fgets(inputStr1, sizeof(inputStr1), stdin);
    inputStr1[strcspn(inputStr1, "\n")] = '\0'; // 去掉fgets带来的换行符
    fgets(inputStr2, sizeof(inputStr2), stdin);
    inputStr2[strcspn(inputStr2, "\n")] = '\0'; // 去掉fgets带来的换行符

    concatenateStrings(inputStr1, inputStr2, result);
    printf("%s", result);

    return 0;
}
