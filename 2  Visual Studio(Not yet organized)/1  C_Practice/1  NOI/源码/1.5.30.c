/*�������������� m �� k������1 < m < 100000��1 < k < 5 ���ж� m �ܷ�19��������ǡ�ú���k��3��������������������YES���������NO��
���磬���룺43833 3
�������������YES��
������룺39331 3
������3��3�������ܱ�19������Ҳ������������Ӧ���NO��*/

#include <stdio.h>

int main() {
    int m, k;
    int countOf3 = 0;

    printf("������m��k��ֵ���ո��������");
    scanf("%d %d", &m, &k);

    // ͳ�� m ������ '3' �ĸ���
    int temp = m;
    while (temp > 0) {
        if (temp % 10 == 3) {
            countOf3++;
        }
        temp /= 10;
    }

    // �ж�����
    if (countOf3 == k && m % 19 == 0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}
