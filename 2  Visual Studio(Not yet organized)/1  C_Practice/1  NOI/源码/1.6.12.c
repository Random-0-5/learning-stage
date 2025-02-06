/*任意给定一个正整数N(N<=100)，计算2的n次方的值。
输入
输入一个正整数N。
输出
输出2的N次方的值。*/

#include<stdio.h>
#include<math.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int power = pow(2, n);

	printf("%d", power);
	return 0;
}