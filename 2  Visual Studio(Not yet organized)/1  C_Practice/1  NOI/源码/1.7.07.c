/*�������Ǻ��ᣨDNA�������������ļ������˫�����ķ�ʽ��϶��ɡ�
������DNA�ļ������4�֣��ֱ�Ϊ����ʣ�A���������ʣ�G����������ण�T���Ͱ���ण�C����
����֪��������������������Ķ�Ӧλ���ϣ���������Ǻ����������ԣ����������ǺͰ������ԡ�
���������Ǹ���һ�������ϵļ�����У�������Ӧ�Ļ������ϵļ�����С�

����
һ���ַ�������ʾһ�������������ַ���ֻ���д�д��ĸA��T��G��C���ֱ��ʾ����ʡ�������ड������ʺͰ���ड��ַ������Ȳ�����255��
���
һ��ֻ���д�д��ĸA��T��G��C���ַ�����Ϊ������ļ���������ļ������*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len_max 256

int main(void) {
    char* str_base = (char*)malloc(len_max * sizeof(char));
    
    // ��ȡ����
    fgets(str_base, len_max, stdin);
    str_base[strcspn(str_base, "\n")] = 0;  // �Ƴ����з�
    size_t len = strlen(str_base);

    // Ϊ�����������ڴ�
    char* str_combase = (char*)malloc((len + 1) * sizeof(char)); // +1 ���ڽ�β�� '\0'

    // ���ɻ�����
    for (size_t i = 0; i < len; i++) {
        switch (str_base[i]) {
            case 'A':
                str_combase[i] = 'T';
                break;
            case 'T':
                str_combase[i] = 'A';
                break;
            case 'G':
                str_combase[i] = 'C';
                break;
            case 'C':
                str_combase[i] = 'G';
                break;
            default:
                str_combase[i] = '0';  // ������Ч�ַ�����ѡ��
                break;
        }
    }

    str_combase[len] = '\0';  // ����ַ���������
    printf("%s\n", str_combase);  // ���������

    // �ͷ��ڴ�
    free(str_base);
    free(str_combase);
    return 0;
}
