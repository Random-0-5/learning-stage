/*����10�����֣�Ȼ�����������
��������
ʮ������
�������
����������ո�ֿ�
����ʾ��
1 2 3 4 5 6 7 8 9 0
���ʾ��
0 9 8 7 6 5 4 3 2 1*/

#include<stdio.h>

int main(void) {
	int num[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", num[10 - 1 - i]);
	}

	return 0;
}