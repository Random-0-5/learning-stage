#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//����ת��
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

    printf("������һ��ʮ������Ȼ����");
    while (1) { 
        if (scanf("%lld", &num) != 1) {
            printf("������Ч������������һ��ʮ������Ȼ����");
            while (getchar() != '\n'); 
        }
        else if (num < 0 || num > LLONG_MAX) {
            printf("��������ֳ�����Χ������������һ��ʮ������Ȼ����");
        }
        else {
            break; 
        }
    }

    do {
        printf("������Ҫת���Ľ��� (2-36)��");
        scanf("%d", &base);

        if (base < 2 || base > 36) {
            printf("���Ʊ����� 2 �� 36 ֮�䡣\n\n����������\n");
        }
    } while (base < 2 || base > 36);

    to_base(num, base, result);
    printf("���� %lld �� %d �����µı�ʾΪ��%s\n", num, base, result);

    getchar(); 
    printf("�����������...\n");
    getchar(); 

    return 0;
}
