/*所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1
如果是偶数，则除以2，得到的结果再按照上述规则重复处理，最终总能够得到1。
如，假定初始整数为5，计算过程分别为16、8、4、2、1。
程序要求输入一个整数，将经过处理得到1的过程输出来*/

#include<stdio.h>

void jiaogu()
{
	int n;
	printf("请输入一个正整数\n");
	scanf("%d", &n);
	do {
		if (n % 2 == 0) {
			n = n / 2;
			printf("%d/2=%d\n", 2 * n, n);
		}
		else {
			n = n * 3 + 1;
			printf("%d*3+1=%d\n", (n-1)/3, n);
		}	
	} while (n != 1);
}

int main()
{
	jiaogu();
	system("pause");
	return 0;
}