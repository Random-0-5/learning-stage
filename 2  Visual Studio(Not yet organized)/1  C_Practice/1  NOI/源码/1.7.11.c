#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    char encrypted[101], original[101], newEncrypted[101];
    char mapping[ALPHABET_SIZE] = {0}; // ���ڴ洢ӳ��
    int used[ALPHABET_SIZE] = {0}; // �����ʹ�õ�����
    int i, length;

    // ���������Ϣ�����Ӧ��ԭ��Ϣ
    scanf("%s", encrypted);
    scanf("%s", original);
    scanf("%s", newEncrypted);

    length = strlen(encrypted);

    // 1. ����ӳ���ϵ
    for (i = 0; i < length; i++) {
        char orgChar = original[i];
        char encChar = encrypted[i];
        int orgIndex = orgChar - 'A'; // ��ĸ����
        int encIndex = encChar - 'A';

        // ���ӳ��ͳ�ͻ
        if (mapping[orgIndex] == 0) {
            // ���û��ӳ�䣬�������
            mapping[orgIndex] = encChar;
            used[encIndex] = 1; // ��������ѱ�ʹ��
        } else if (mapping[orgIndex] != encChar) {
            // ����Ѿ���ӳ�䲢�Ҳ�ͬ�������
            printf("Failed\n");
            return 0;
        }
    }

    // 2. ����Ƿ�������ĸ������
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (mapping[i] == 0) {
            printf("Failed\n");
            return 0;
        }
    }

    // 3. ����籨�еļ�����Ϣ
    for (i = 0; newEncrypted[i] != '\0'; i++) {
        char newChar = newEncrypted[i];
        int newIndex = newChar - 'A';
        putchar(mapping[newIndex]);
    }
    putchar('\n'); // �������

    return 0;
}
