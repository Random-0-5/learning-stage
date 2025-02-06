/*一个正整数,如果它能被7整除,或者它的十进制表示法中某一位上的数字为7,则称其为与7相关的数.现求所有小于等于n(n < 100)的与7无关的正整数的平方和.
输入为一行,正整数n(n < 100)
输出一行，包含一个整数，即小于等于n的所有与7无关的正整数的平方和。*/

#include<stdio.h>

int main() {
	int n,sum=0;
	int num[2];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int j = i;
		num[0] = j % 10;
		j /= 10;
		num[1] = j % 10;

		if (num[0] != 7 && num[1] != 7 && i%7!=0) {
			sum += (i * i);
		}	
	}

	printf("%d", sum);
	return 0;
}