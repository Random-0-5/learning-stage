/*���������ַ�������֤����һ�����Ƿ�Ϊ��һ�������Ӵ���

����
���������ַ����� ÿ���ַ���ռһ�У����Ȳ�����200�Ҳ����ո�
���
����һ����s1�ǵڶ�����s2���Ӵ��������(s1) is substring of (s2)
�������ڶ�����s2�ǵ�һ����s1���Ӵ������(s2) is substring of (s1)
������� No substring��*/

/*���������ַ�������֤����һ�����Ƿ�Ϊ��һ�������Ӵ���

����
���������ַ����� ÿ���ַ���ռһ�У����Ȳ�����200�Ҳ����ո�
���
����һ����s1�ǵڶ�����s2���Ӵ��������(s1) is substring of (s2)
�������ڶ�����s2�ǵ�һ����s1���Ӵ������(s2) is substring of (s1)
������� No substring��*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // ȥ�����з�
    str2[strcspn(str2, "\n")] = 0; // ȥ�����з�

    // �ж��Ӵ���ϵ
    if (strstr(str2, str1) != NULL) {
        // str1��str2���Ӵ�
        printf("%s is substring of %s\n", str1, str2);
    } else if (strstr(str1, str2) != NULL) {
        // str2��str1���Ӵ�
        printf("%s is substring of %s\n", str2, str1);
    } else {
        // ������
        printf("No substring\n");
    }
    
    // �ͷ��ڴ�
    free(str1);
    free(str2);
    
    return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // ȥ�����з�
    str2[strcspn(str2, "\n")] = 0; // ȥ�����з�

    // �ж��Ӵ���ϵ
    if (strstr(str2, str1) != NULL) {
        // str1��str2���Ӵ�
        printf("%s is substring of %s\n", str1, str2);
    } else if (strstr(str1, str2) != NULL) {
        // str2��str1���Ӵ�
        printf("%s is substring of %s\n", str2, str1);
    } else {
        // ������
        printf("No substring\n");
    }
    
    // �ͷ��ڴ�
    free(str1);
    free(str2);
    
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define len_max 201

int main(void) {
    char* str1 = (char*)malloc(len_max * sizeof(char));
    char* str2 = (char*)malloc(len_max * sizeof(char));

    fgets(str1, len_max, stdin);
    fgets(str2, len_max, stdin);

    str1[strcspn(str1, "\n")] = 0; // ȥ�����з�
    str2[strcspn(str2, "\n")] = 0; // ȥ�����з�

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    int found = 0; // ��־��������ʶ�Ƿ��ҵ��Ӵ�

    // �ж�str1�Ƿ�Ϊstr2���Ӵ�
    for (size_t i = 0; i <= len2 - len1; i++) {
        if (strncmp(&str2[i], str1, len1) == 0) {
            printf("%s is substring of %s\n", str1, str2);
            found = 1;
            break;
        }
    }

    // ���û���ҵ����ж�str2�Ƿ�Ϊstr1���Ӵ�
    if (!found) {
        for (size_t i = 0; i <= len1 - len2; i++) {
            if (strncmp(&str1[i], str2, len2) == 0) {
                printf("%s is substring of %s\n", str2, str1);
                found = 1;
                break;
            }
        }
    }

    // �����û���ҵ�
    if (!found) {
        printf("No substring\n");
    }

    // �ͷ��ڴ�
    free(str1);
    free(str2);

    return 0;
}
*/
