/*在线性代数、计算几何中，向量点积是一种十分重要的运算。
给定两个n维向量a=(a1,a2,...,an)和b=(b1,b2,...,bn)，求点积a·b=a1b1+a2b2+...+anbn。
输入
第一行是一个整数n。1 <= n <= 1000。
第二行包含n个整数a1,a2,...,an。
第三行包含n个整数b1,b2,...,bn。
相邻整数之间用单个空格隔开。每个整数的绝对值都不超过1000。
输出
一个整数，即两个向量的点积结果。*/

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