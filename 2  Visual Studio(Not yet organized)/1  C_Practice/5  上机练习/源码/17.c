#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    char temp[len + 1];

    for (int i = 0; i < len; i++) {
        temp[i] = str[len - 1 - i];
    }
    temp[len] = '\0';

    printf("%s", temp);


}

int main() {
    char inputStr[100];
    fgets(inputStr, sizeof(inputStr), stdin);
    inputStr[strcspn(inputStr, "\n")] = '\0';
    reverseString(inputStr);
    return 0;
}