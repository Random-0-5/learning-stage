/*��λ���ϵ����ּ�ȥǧλ���ϵ����֣��ټ�ȥ��λ���ϵ����֣� �ټ�ȥʮλ���ϵ����ֵĽ�������㡣*/

#include <stdio.h>

void calculateDigitsDifference() {
    int begin, end;
    printf("���ҷ�Χ: ");
    scanf("%d %d", &begin, &end);

    // ȷ��beginС��end
    if (begin > end) {
        int temp = begin;
        begin = end;
        end = temp;
    }

    printf("�������������ּ��������:\n");
    // ������Χ�ڵ�ÿ������
    for (int i = begin; i <= end; i++) {
        int digits[10]; // �洢ÿλ���֣��������10λ
        int count = 0;  // ��¼ʵ��λ��
        int j = i;
        
        // ��ȡÿλ����
        while (j > 0) {
            digits[count] = j % 10; // �洢��ǰλ
            j /= 10;
            count++;
        }

        // �Ӹ�λ����ʼ����
        int sum = digits[0]; // ��ʼ��Ϊ��λ��
        for (int k = 1; k < count; k++) {
            sum -= digits[k]; // ��ȥ����λ
        }

        // ������з�������������
        if (sum > 0) {
            printf("%d �ļ������������������Ϊ: %d\n", i, sum);
        }
    }
}

int main() {
    calculateDigitsDifference();
    return 0;
}
