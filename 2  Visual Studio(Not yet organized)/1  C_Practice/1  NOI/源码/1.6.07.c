/*һ������Ϊn��n>0���������д��ڡ���Ȥ����Ծ����ǰ��������Ԫ�صĲ�ľ���ֵ��������������Ǵ�1��(n-1)��
���磬1 4 2 3���ڡ���Ȥ����Ծ������Ϊ��ľ���ֵ�ֱ�Ϊ3,2,1����Ȼ���κ�ֻ��������Ԫ�ص�����һ�����ڡ���Ȥ����Ծ����
����Ҫдһ�������ж����������Ƿ���ڡ���Ȥ����Ծ����
����
һ�У���һ������n��0 < n < 3000����Ϊ���г��ȣ���������n������������Ϊ�����и�Ԫ�أ���Ԫ�صľ���ֵ��������1,000,000,000��
���
һ�У��������д��ڡ���Ȥ����Ծ�������"Jolly"���������"Not jolly"��*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int n;
    scanf("%d", &n);

    // ��̬�����ڴ�
    int* numbers = (int*)malloc(n * sizeof(int));
    if (numbers == NULL) {
        return 1; // �ڴ����ʧ��
    }

    // ��ȡ�����е�ÿ��Ԫ��
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // ���ֻ��һ��Ԫ�أ�ֱ����� Jolly
    if (n == 1) {
        printf("Jolly\n");
        free(numbers);
        return 0;
    }

    // ����һ������洢���Բ�
    int* diffs = (int*)malloc((n - 1) * sizeof(int));
    if (diffs == NULL) {
        free(numbers);
        return 1; // �ڴ����ʧ��
    }

    // ������Բ�
    for (int i = 0; i < n - 1; i++) {
        diffs[i] = abs(numbers[i + 1] - numbers[i]);
    }

    // ���ڱ�ǲ�ľ���ֵ�Ƿ����
    bool* exists = (bool*)calloc(n, sizeof(bool));
    if (exists == NULL) {
        free(numbers);
        free(diffs);
        return 1; // �ڴ����ʧ��
    }

    // �����Ч�Ĳ�ľ���ֵ
    for (int i = 0; i < n - 1; i++) {
        if (diffs[i] > 0 && diffs[i] < n) {
            exists[diffs[i]] = true; // ��Ǹò�ľ���ֵ����
        }
    }

    // ����Ƿ����е� 1 �� (n-1) ������
    bool isJolly = true;
    for (int i = 1; i < n; i++) {
        if (!exists[i]) {
            isJolly = false;
            break;
        }
    }

    // ������
    if (isJolly) {
        printf("Jolly\n");
    } else {
        printf("Not jolly\n");
    }

    // �ͷŶ�̬������ڴ�
    free(numbers);
    free(diffs);
    free(exists);

    return 0;
}
