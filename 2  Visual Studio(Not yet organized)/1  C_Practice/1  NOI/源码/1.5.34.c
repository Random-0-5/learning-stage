/*����������n���󲻴���n���������Ľ׳˵ĺͣ�����1!+2!+3!+...+n!��
������һ�У�����һ��������n��1 < n < 12����
�����һ�У��׳˵ĺ͡�*/

#include <stdio.h>

int main() {
    int n, factorial, sum = 0;
    printf("������һ���Ǹ�������");
    scanf("%d", &n);

    if (n < 0) {
        printf("����û�н׳ˣ�\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) { 
        factorial = 1; 
        for (int j = 1; j <= i; j++) { 
            factorial *= j;
        }
        sum += factorial; // �ۼӵ� sum
    }

    printf("�׳˺�Ϊ��%d\n", sum); // ������
    return 0;
}
