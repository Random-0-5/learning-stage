/*���һ��������������ָ��������ͬ�����ĸ�����
����������У�
��һ��ΪN����ʾ�������еĳ���(N <= 100)��
�ڶ���ΪN������������֮����һ���ո�ֿ���
�����а���һ��������Ϊָ��������m��
���ΪN��������m��ͬ�����ĸ�����*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, count = 0;  // ��ʼ��countΪ0
    printf("�����������С: ");
    scanf("%d", &n);  // ��ȡ�����С

    // ��̬�����ڴ�
    int *array = (int *)malloc(n * sizeof(int)); 
    if (array == NULL) {  // ����ڴ�����Ƿ�ɹ�
        printf("�ڴ����ʧ��\n");
        return 1; // ���ش������
    }

    // ��������Ԫ��
    printf("������ %d ������:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); // ʹ�� &array[i] ��ȡ����Ԫ��
    }

    // ������Ҫ���ҵ�Ԫ��
    printf("������Ҫ���ҵ����� m: ");
    scanf("%d", &m);

    // ͳ�� m �������еĳ��ִ���
    for (int i = 0; i < n; i++) {
        if (array[i] == m) {
            count++;
        }
    }

    // ������
    printf("%d �������г��ֵĴ�����: %d\n", m, count);

    // �ͷŶ�̬������ڴ�
    free(array);
    
    return 0;
}
