/*利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。
输入只有一行，该行包含一个整数n（2<=n<=15），表示计算e时累加到1/n！。
输出只有一行，该行包含计算出来的e的值，要求打印小数点后10位。*/

#include<stdio.h>

int main(void) {
	int n,factorial;
	double e=1.0;
	printf("请输入一个正整数：");
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