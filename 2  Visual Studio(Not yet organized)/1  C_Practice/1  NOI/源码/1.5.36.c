/*假定多项式的形式为xn+xn-1+…+x2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。
输入仅一行，包括x和n，用单个空格隔开。x在float范围内，n <= 1000000。
输出一个实数，即多项式的值，精确到小数点后两位。保证最终结果在float范围内。*/

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