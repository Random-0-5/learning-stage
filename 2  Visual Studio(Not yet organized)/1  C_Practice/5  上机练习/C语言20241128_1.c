/*����һ���ַ�����˵������һ��ѭ����λ����Ϊ�����ַ����ĵ�һ���ַ��ƶ���ĩβ�γ��µ��ַ�����

���������ַ���s1��s2��Ҫ���ж�����һ���ַ����Ƿ�����һ�ַ���ͨ�����ɴ�ѭ����λ������ַ������Ӵ���
����CDAA����AABCD������λ��������´�BCDAA���Ӵ�����ABCD��ACBD����ͨ�������λ���õ�����һ���ַ������´����Ӵ���

����
һ�У����������ַ������м��ɵ����ո�������ַ���ֻ������ĸ�����֣����Ȳ�����30��
���
���һ���ַ�������һ�ַ���ͨ�����ɴ�ѭ����λ�������´����Ӵ��������true���������false��
��������
AABCD CDAA
�������
true*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool substring(const char* s1, const char* s2) {

    char s1s1[60];
    strcpy(s1s1, s1);
    strcat(s1s1, s1);

    return strstr(s1s1, s2) != NULL;
}

int main() {
    char s1[31], s2[31];
    scanf("%s %s", s1, s2);

    if (substring(s1, s2)) {
        printf("true\n");
    }
    else if (substring(s2, s1)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}