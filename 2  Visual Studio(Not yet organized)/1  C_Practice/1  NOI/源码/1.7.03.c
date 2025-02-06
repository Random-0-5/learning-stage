/*Ϊ�˻�֪���������ڹ��ܺͽṹ�ϵ������ԣ�������Ҫ��������ͬ���е�DNA���бȶԣ����жϸñȶԵ�DNA�Ƿ��������ԡ�
�ֱȶ�����������ͬ��DNA���С����ȶ�������DNA������ͬλ�õļ��Ϊһ������ԣ�
���һ��������е����������ͬ�Ļ������Ϊ��ͬ����ԡ����ż�����ͬ�����ռ�ܼ���������ı�����
����ñ������ڵ��ڸ�����ֵʱ���ж�������DNA��������صģ�������ء�
����
�����У���һ���������ж�������DNA�����Ƿ���ص���ֵ�����2��������DNA���У����Ȳ�����500����
���
������DNA������أ��������yes�������������no����*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 500;  // ��󳤶ȶ���
    float count = 0.0; // ��ͬ����Լ���
    float threshold;

    // ������ֵ
    printf("�������ж�����Ե���ֵ��0��1֮�䣩��");
    scanf("%f", &threshold);
    getchar(); // ������뻺�����еĻ��з�

    // ��̬�����ڴ�
    char* gene1 = (char*)malloc(size * sizeof(char));
    char* gene2 = (char*)malloc(size * sizeof(char)); // �趨������ͬ

    // ����ڴ�����Ƿ�ɹ�
    if (gene1 == NULL || gene2 == NULL) {
        fprintf(stderr, "�ڴ����ʧ��\n");
        return 1; // �����쳣�˳�
    }

    // ��������DNA����
    printf("�������һ��DNA���У�");
    fgets(gene1, size, stdin);
    printf("������ڶ���DNA���У�");
    fgets(gene2, size, stdin);

    // ȥ�����з�
    gene1[strcspn(gene1, "\n")] = 0;
    gene2[strcspn(gene2, "\n")] = 0;

    // ȷ��ʵ�ʳ���
    int len1 = strlen(gene1);
    int len2 = strlen(gene2);

    // ��鳤���Ƿ���ͬ
    if (len1 != len2) {
        printf("�����DNA���г��Ȳ�һ�£���ȷ���������г�����ͬ��\n");
        free(gene1);
        free(gene2);
        return 1; // �������
    }

    // ������ͬ����Ե�����
    for (int i = 0; i < len1; i++) {
        if (gene1[i] == gene2[i]) // ʹ��ʵ�ʳ��Ƚ��бȽ�
            count++;
    }

    // �ж�����Բ����
    if (count / len1 >= threshold)
        printf("yes\n");
    else
        printf("no\n");

    // �ͷ��ڴ�
    free(gene1);
    free(gene2);

    return 0;
}
