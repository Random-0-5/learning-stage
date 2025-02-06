/*��֪������ n ��������ͬ�������ĳ˻���������ϴ���Ǹ�������
����ֻ��һ�У�����һ�������� n��
����60%�����ݣ�6 �� n �� 1000��
����100%�����ݣ�6 �� n �� 2*10^9��
���ֻ��һ�У�����һ�������� p�����ϴ���Ǹ�������*/

#include <stdio.h>

// �������ж�һ�����Ƿ�Ϊ����
int is_prime(int num) {
    if (num <= 1) return 0; // 1 ���С�����ֲ�������
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // ��������
        }
    }
    return 1; // ������
}

int main() {
    long long n; // ʹ�� long long ��֧�ֽϴ�����뷶Χ
    scanf("%lld", &n);

    // ��2��ʼ���������
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) { // �ҵ�һ������ i
            long long first_prime = i;
            long long second_prime = n / i;

            // ��Ҫȷ�����������ǲ�ͬ��
            if (first_prime != second_prime) {
                // ������������Ƿ���Ч
                if (is_prime(first_prime) && is_prime(second_prime)) {
                    printf("%lld\n", second_prime > first_prime ? second_prime : first_prime);
                    return 0; // �ҵ�����������
                }
            }
        }
    }

    // ���û���ҵ��ʺϵ�������
    printf("û���ҵ�������ͬ�������ĳ˻�\n");
    return 0;
}
