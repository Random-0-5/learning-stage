#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//进制转换
void to_base(long long num, int base, char* result) {
    if (num == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    int index = 0;
    while (num > 0) {
        int digit = num % base;
        if (digit < 10) {
            result[index++] = digit + '0';
        }
        else {
            result[index++] = digit - 10 + 'A'; 
        }
        num /= base;
    }
    result[index] = '\0';

    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - 1 - i];
        result[index - 1 - i] = temp;
    }
}

int main() {
    long long num;
    int base;
    char result[50];

    printf("请输入一个十进制自然数：");
    while (1) { 
        if (scanf("%lld", &num) != 1) {
            printf("输入无效，请重新输入一个十进制自然数：");
            while (getchar() != '\n'); 
        }
        else if (num < 0 || num > LLONG_MAX) {
            printf("输入的数字超出范围！请重新输入一个十进制自然数：");
        }
        else {
            break; 
        }
    }

    do {
        printf("请输入要转换的进制 (2-36)：");
        scanf("%d", &base);

        if (base < 2 || base > 36) {
            printf("进制必须在 2 到 36 之间。\n\n请重新输入\n");
        }
    } while (base < 2 || base > 36);

    to_base(num, base, result);
    printf("数字 %lld 在 %d 进制下的表示为：%s\n", num, base, result);

    getchar(); 
    printf("按任意键继续...\n");
    getchar(); 

    return 0;
}
