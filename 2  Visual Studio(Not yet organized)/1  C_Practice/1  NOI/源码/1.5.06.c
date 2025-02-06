/*����һ������Ϊn�ķǸ��������У���������е������ֵ�������ֵ = ���ֵ��ȥ��Сֵ����
����
һ��2�У���һ��Ϊ���еĸ���n��1 <= n <= 1000)���ڶ���Ϊ���е�n��������1000�ķǸ�����������֮����һ���ո�ָ���
���
���һ�У���ʾ���е������ֵ��*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* numbers = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_num = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    int min_num = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
    }

    int span = max_num - min_num;
    printf("%d\n", span);

    free(numbers);
    return 0;
}