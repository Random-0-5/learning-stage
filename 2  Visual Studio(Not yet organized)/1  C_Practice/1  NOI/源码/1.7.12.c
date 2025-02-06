/*СӢ��ҩѧרҵ������ѧ��������ڼ�����ȥҽԺҩ��ʵϰ�Ļ��ᡣ
��ҩ��ʵϰ�ڼ䣬СӢ��ʵ��רҵ���������ҽ����һ�º�������֪СӢ�ڼ��������ȡ�ù��óɼ���
�����ֶ��⽻����һ�����񣬽��ܿ�սʱ�ڱ����ܹ���һЩ��Ա��������
�����о���СӢ���������¼��ܹ��ɣ���������һ����ԭ�� -> ���ġ������ӣ�
1.  ԭ�������е��ַ�������ĸ���б�ѭ������������λ�ã�dec  -> abz��
2.  ����洢��abcd -> dcba ��
3.  ��Сд��ת��abXY -> ABxy��

����
һ�����ܵ��ַ�����������С��50��ֻ������Сд��ĸ��
���
������ܺ���ַ����� */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // ������ͷ�ļ���ʹ�� tolower �� toupper

#define len_max 50

int main(void) {
    char* ciphertext = (char*)malloc(len_max * sizeof(char));
    fgets(ciphertext, len_max, stdin);

    ciphertext[strcspn(ciphertext, "\n")] = 0; // ȥ��ĩβ�Ļ��з�
    size_t len = strlen(ciphertext);

    // 1. ��ת��Сд
    for (int i = 0; i < len; i++) {
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
            ciphertext[i] = toupper(ciphertext[i]); // ʹ�� toupper ����
        } else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            ciphertext[i] = tolower(ciphertext[i]); // ʹ�� tolower ����
        }
    }

    // 2. ����洢
    for (int i = 0; i < len / 2; i++) {
        char temp = ciphertext[i];
        ciphertext[i] = ciphertext[len - 1 - i];
        ciphertext[len - 1 - i] = temp;
    }

    // 3. ������λ�����ܣ�
    for (int i = 0; i < len; i++) {
        if ((ciphertext[i] >= 'a' && ciphertext[i] <= 'z')) {
            ciphertext[i] -= 3; 
            if (ciphertext[i] < 'a') {
                ciphertext[i] += 26; // ѭ������ĸ��ĩβ
            }
        } else if ((ciphertext[i] >= 'A' && ciphertext[i] <= 'Z')) {
            ciphertext[i] -= 3; 
            if (ciphertext[i] < 'A') {
                ciphertext[i] += 26; // ѭ������ĸ��ĩβ
            }
        }
    }

    // ������ܺ���ַ���
    printf("%s\n", ciphertext);

    free(ciphertext); // �ͷŶ�̬������ڴ�
    return 0;
}
