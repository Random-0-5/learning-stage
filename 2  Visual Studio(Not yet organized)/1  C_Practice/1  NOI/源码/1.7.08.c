/*��һ���ַ������ض����ַ�ȫ���ø������ַ��滻���õ�һ���µ��ַ�����
����
ֻ��һ�У���һ���ַ����������ַ���ɣ��м��õ����ո������
�ַ����Ǵ��滻���ַ������ַ�������С�ڵ���30���ַ����Ҳ����ո�ȿհ׷���
������һ���ַ�Ϊ��Ҫ���滻���ض��ַ���
������һ���ַ�Ϊ�����滻�ĸ����ַ�*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_MAX 31

int main(void) {
    char str[LEN_MAX];
    char replaced_begin, replaced_end;

    // ��ȡ����
    fgets(str, LEN_MAX, stdin);

    // ����������ȡǰһ���ַ����󣬶�ȡ��Ҫ�滻���ַ�
    sscanf(str + strlen(str) - 4, "%c %c", &replaced_begin, &replaced_end);
    
    // ���ַ���ĩβ��ӽ�����
    str[strcspn(str, "\n")] = '\0'; // ȥ�����з�

    // �����ַ��滻
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == replaced_begin) {
            str[i] = replaced_end;
        }
    }

    str[strlen(str)-4] = '\0';
    // ��ӡ�滻����ַ���
    printf("%s\n", str);

    return 0;
}
