/*����һ���ַ���ͳ�Ƴ����������ַ��ĸ�����
����
һ���ַ������ܳ��Ȳ�����255��
���
���Ϊ1�У�����ַ������������ַ��ĸ�����*/

#include <stdio.h>

int main(void) {
    char character[256];  // �ַ����飬����Ϊ256�������ַ����ͽ�β�ַ�
    int count = 0;  // ����ͳ�������ַ��ĸ���

    // �����ַ���
    printf("�������ַ������ܳ��Ȳ�����255���ַ�����");
    fgets(character, sizeof(character), stdin);  // ʹ��fgets��ȡһ���ַ�

    // �����ַ�����ͳ�������ַ�
    for (int i = 0; character[i] != '\0'; i++) {
        if (character[i] >= '0' && character[i] <= '9') {  // ����Ƿ��������ַ�
            count++;
        }
    }

    // ��������ַ��ĸ���
    printf("%d\n", count);

    return 0;
}