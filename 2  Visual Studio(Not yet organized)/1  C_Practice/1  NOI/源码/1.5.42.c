/*����
����һ�У������ĸ�������ǰ��������Ϊ���������δ�����εĸߺͿ��߲�����3�в�����10�У�������5�в�����10�У���
������������һ���ַ�����ʾ������ͼ�ľ��η��ţ����ĸ�����Ϊ1��0��0������ģ�1����ʵ�ġ�
���������ͼ��*/

#include<stdio.h>

int main(void) {
	int high, wide, heart;
	char symblo;
	scanf("%d %d %c %d", &high, &wide, &symblo, &heart);

	for (int i = 1; i <= high; i++) {
		for (int j = 1; j <= wide; j++) {
			if (heart == 1 ) {
				printf("%c", symblo);
			}
			else if (heart == 0) {
				if (i == high || i == 1 || j == wide || j == 1) {
					printf("%c", symblo);
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}