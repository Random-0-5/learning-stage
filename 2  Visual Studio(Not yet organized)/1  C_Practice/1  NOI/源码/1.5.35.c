/*���ù�ʽe = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! ��e ��
����ֻ��һ�У����а���һ������n��2<=n<=15������ʾ����eʱ�ۼӵ�1/n����
���ֻ��һ�У����а������������e��ֵ��Ҫ���ӡС�����10λ��*/

#include<stdio.h>

int main(void) {
	int n,factorial;
	double e=1.0;
	printf("������һ����������");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}
		e += (1.0 / factorial);
	}

	printf("%.10lf",e);
	return 0;
}