/*�����Դ��������㼸���У����������һ��ʮ����Ҫ�����㡣
��������nά����a=(a1,a2,...,an)��b=(b1,b2,...,bn)������a��b=a1b1+a2b2+...+anbn��
����
��һ����һ������n��1 <= n <= 1000��
�ڶ��а���n������a1,a2,...,an��
�����а���n������b1,b2,...,bn��
��������֮���õ����ո������ÿ�������ľ���ֵ��������1000��
���
һ�������������������ĵ�������*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n,dot_product=0;
	scanf("%d", &n);
	int* vectors1 = (int*)malloc(n * sizeof(int));
	int* vectors2 = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d",&vectors1[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d",&vectors2[i]);
	}

	for (int i = 0; i < n; i++) {
		dot_product += (vectors1[i] * vectors2[i]);
	}

	printf("%d", dot_product);

	free(vectors1);
	free(vectors2);
	return 0;
}