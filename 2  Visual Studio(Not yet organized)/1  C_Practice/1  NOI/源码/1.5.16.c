/*ĳ����Ա��ʼ��������нN����ϣ�����йش幫����һ��60ƽ�׵ķ��ӣ����ڼ۸���200��
���跿�Ӽ۸���ÿ��ٷ�֮K���������Ҹó���Աδ����н���䣬�Ҳ��Բ��ȣ����ý�˰��ÿ������N��ȫ������������
�ʵڼ����ܹ��������׷��ӣ�����һ����нN�򣬷���200��

����
һ�У���������������N��10 <= N <= 50��, K��1 <= K <= 20�����м��õ����ո������
���
����ڵ�20�����֮ǰ�����������׷��ӣ������һ������M����ʾ������Ҫ�ڵ�M�������£��������Impossible��*/

#include<stdio.h>

#define YEARS 20

int main(void) {
	int N,K, deposit=0;
	float prices = 200.0;
	scanf("%d %d", &N, &K);

	if (N >= prices) {
		printf("1");
	}


	for (int i = 2; i <= YEARS; i++) {
		prices *= (1.0 + K / 100.0);
		deposit = N * i;

		if (deposit >= prices) {
			printf("%d", i);
			break;
		}
	}
	if (deposit < prices)
		printf("Impossible");

		return 0;
}