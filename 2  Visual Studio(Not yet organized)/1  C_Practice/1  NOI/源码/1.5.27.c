/*��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
�ָ���һ������K��1<=k<=15����Ҫ������һ����С��n��ʹ��Sn��K��
����:һ������K��
���:һ������n��*/

#include<stdio.h>

int main()
{
	int k;
	double sum = 0;
	printf("������k(1<=k<=15)\n");
	scanf("%d",&k);

	for (int n = 1;  ; n++) {
		sum += 1.0 / n;
		if (sum > k) {
			printf("n��ֵΪ%d", n);
			return 0;
		}
	}

	return 0;
}