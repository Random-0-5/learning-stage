/*����һ���ַ������Իس��������ַ�������<=100�������ַ��������ɸ�������ɣ�����֮����һ���ո������
���е������ִ�Сд������Ҫ�����е�ĳ�������滻����һ�����ʣ�������滻֮����ַ�����

����
�������3�У�
��1���ǰ���������ʵ��ַ��� s;
��2���Ǵ��滻�ĵ���a(���� <= 100);
��3����a�����滻�ĵ���b(���� <= 100).

s, a, b ��ǰ�������涼û�пո�.
���
���ֻ�� 1 �У���s�����е���a�滻��b֮����ַ�����*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN_MAX 100

// ���������滻�ַ����еĵ���
void replace_word(char *str, const char *word1, const char *word2) {
    char *pos = strstr(str, word1); // �ҵ���һ�� word1 ��λ��
    int word1_len = strlen(word1);
    int word2_len = strlen(word2);
    
    while (pos) {
        // �����µ��ַ���������滻��Ľ��
        char new_str[LEN_MAX];
        
        // ���Ƶ� new_str ���滻 word1
        strncpy(new_str, str, pos - str); // ��ԭʼ�ַ�����ͷ�� word1 ����ʼλ��
        new_str[pos - str] = '\0'; // �����ַ���������
        
        // ��� word2
        strcat(new_str, word2);
        
        // ��� word1 ֮��Ĳ���
        strcat(new_str, pos + word1_len);
        
        // ���ƻ�ԭʼ�ַ���
        strcpy(str, new_str);
        
        // ����������һ�� word1
        pos = strstr(str, word1);
    }
}

int main(void) {
    char str[LEN_MAX]; // ԭʼ�ַ���
    char word1[LEN_MAX]; // ���滻�ĵ���
    char word2[LEN_MAX]; // �滻��ĵ���

    // ����ԭʼ�ַ���
    fgets(str, LEN_MAX, stdin);
    // ������滻�ĵ���
    fgets(word1, LEN_MAX, stdin);
    // �����滻��ĵ���
    fgets(word2, LEN_MAX, stdin);

    // ȥ���ַ���ĩβ�Ļ��з�
    str[strcspn(str, "\n")] = 0;
    word1[strcspn(word1, "\n")] = 0;
    word2[strcspn(word2, "\n")] = 0;

    // �����滻����
    replace_word(str, word1, word2);

    // ����滻��Ľ��
    printf("%s\n", str);

    return 0;
}

