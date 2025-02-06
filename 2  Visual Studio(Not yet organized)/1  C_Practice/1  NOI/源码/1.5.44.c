/*����һ��������n�����nС��������
����
һ��������10000��������n��*/

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; // 1 ���С�����ֲ�������
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // ��������
        }
    }
    return 1; // ������
}

int main(void) {
    int n, count = 0; // n ��Ҫ���ҵ������������
    scanf("%d", &n);

    // �� 2 ��ʼ�������
    int i;
    for ( i = 2; count < n; i++) {
        if (is_prime(i)) {
            count++; // �ҵ�һ������
        }
    }

    // ��ѭ������ʱ��i ���ǵ� n ������
    // �������һ��ѭ��ʱ i + 1 ������Ҫ������� i-1 ��ӡ
    printf("%d\n", i - 1);

    return 0;
}
