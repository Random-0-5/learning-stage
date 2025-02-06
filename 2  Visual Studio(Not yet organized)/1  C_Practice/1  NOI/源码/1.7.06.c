/*����һ���������հ׷����ַ��������ж��Ƿ���C���ԺϷ��ı�ʶ���ţ�ע����Ŀ��֤��Щ�ַ���һ������C���Եı����֣���

C���Ա�ʶ��Ҫ��

1. �Ǳ����֣�
2. ֻ������ĸ�����ּ��»��ߣ���_������
3. �������ֿ�ͷ��

����
һ�У�����һ���ַ������ַ����в������κοհ��ַ����ҳ��Ȳ�����20��
���
һ�У��������C���ԵĺϷ���ʶ���������yes���������no��*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define strlen_max 21  // ��ַ������ȼ�1�����ɽ�����

int main(void) {
    char* str = (char*)malloc(strlen_max * sizeof(char));
    
    // ��ȡ�����ַ���
    fgets(str, strlen_max, stdin);
    str[strcspn(str, "\n")] = 0;  // �Ƴ����з�
    size_t len = strlen(str);
    
    // ��鳤���Ƿ�Ϊ0��������Ŀ��֤��Ϊ�գ�
    if (len == 0) {
        printf("no");
        free(str);
        return 0;
    }

    // ����Ƿ��ǺϷ��ı�ʶ��
    if (str[0] >= '0' && str[0] <= '9') {
        printf("no");
    } else {
        int is_valid = 1;  // ��ʶ����Ч�Գ�ʼ��

        for (size_t i = 0; i < len; i++) {
            // �ж��ַ��Ƿ�����ĸ�����ֻ��»���
            if (!( (str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= 'a' && str[i] <= 'z') || 
                   (str[i] >= '0' && str[i] <= '9') || 
                   (str[i] == '_') )) 
            {
                is_valid = 0;  // ������Ч�ַ�
                break;
            }
        }

        if (is_valid) {
            printf("yes");
        } else {
            printf("no");
        }
    }

    free(str);
    return 0;
}
