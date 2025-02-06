/*输入10个数字，然后逆序输出。
输入描述
十个整数
输出描述
逆序输出，空格分开
输入示例
1 2 3 4 5 6 7 8 9 0
输出示例
0 9 8 7 6 5 4 3 2 1*/

#include<stdio.h>

int main(void) {
	int num[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", num[10 - 1 - i]);
	}

	return 0;
}