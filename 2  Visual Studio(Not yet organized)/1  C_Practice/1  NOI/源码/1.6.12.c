/*�������һ��������N(N<=100)������2��n�η���ֵ��
����
����һ��������N��
���
���2��N�η���ֵ��*/

#include<stdio.h>
#include<math.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int power = pow(2, n);

	printf("%d", power);
	return 0;
}