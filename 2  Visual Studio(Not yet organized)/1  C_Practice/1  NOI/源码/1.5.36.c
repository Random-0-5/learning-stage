/*�ٶ�����ʽ����ʽΪxn+xn-1+��+x2+x+1���������������ȸ�����x��������nֵ��������������ʽ��ֵ��
�����һ�У�����x��n���õ����ո������x��float��Χ�ڣ�n <= 1000000��
���һ��ʵ����������ʽ��ֵ����ȷ��С�������λ����֤���ս����float��Χ�ڡ�*/

#include<stdio.h>
#include<math.h>

int main() {
	float x;
	int n;
	scanf("%f %d", &x, &n);
	double sum = 0;

	for (int i = 0; i <= n; i++) {
		double result = pow(x, i);
		sum += result;
	}

	printf("%.2lf", sum);
	return 0;
}