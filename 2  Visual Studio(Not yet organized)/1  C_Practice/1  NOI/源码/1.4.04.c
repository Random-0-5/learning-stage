#include <stdio.h>

int main() {
    char character;
    
    // ����һ���ַ�
    printf("������һ���ַ���");
    scanf("%c", &character);
    
    // ��ȡ�ַ���ASCIIֵ
    int ascii_value = (int)character;
    
    // �ж�ASCIIֵ�Ƿ�Ϊ����
    if (ascii_value % 2 == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    printf("%d", character);

    return 0;
}
