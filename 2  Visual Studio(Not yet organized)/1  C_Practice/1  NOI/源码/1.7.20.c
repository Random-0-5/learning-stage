/*����һ�����ʣ�����õ�����er��ly����ing��׺��β�� 
��ɾ���ú�׺����Ŀ��֤ɾ����׺��ĵ��ʳ��Ȳ�Ϊ0���� ���򲻽����κβ�����

����
����һ�У�����һ�����ʣ������м�û�пո�ÿ��������󳤶�Ϊ32����
���
���������ĿҪ�����ĵ��ʡ�*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_word(char *word) {
    int len = strlen(word);
    
    // ����׺��ɾ��
    if (len > 3 && strcmp(word + len - 3, "ing") == 0) {
        word[len - 3] = '\0'; // ɾ�� "ing"
    } else if (len > 2 && strcmp(word + len - 2, "ly") == 0) {
        word[len - 2] = '\0'; // ɾ�� "ly"
    } else if (len > 2 && strcmp(word + len - 2, "er") == 0) {
        word[len - 2] = '\0'; // ɾ�� "er"
    }
}

int main() {
    char word[33]; // �������飬��󳤶�Ϊ32����1����������
    // ���뵥��
    scanf("%s", word);
    
    // ������
    process_word(word);
    
    // ��������ĵ���
    printf("%s\n", word);

    return 0;
}

