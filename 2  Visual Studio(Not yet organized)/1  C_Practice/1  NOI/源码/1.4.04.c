#include <stdio.h>

int main() {
    char character;
    
    // 输入一个字符
    printf("请输入一个字符：");
    scanf("%c", &character);
    
    // 获取字符的ASCII值
    int ascii_value = (int)character;
    
    // 判断ASCII值是否为奇数
    if (ascii_value % 2 == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    printf("%d", character);

    return 0;
}
