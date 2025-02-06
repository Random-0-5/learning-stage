/*请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。

比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。
输入共 1 行，为两个正整数 L 和 R，之间用一个空格隔开。
输出共 1 行，表示数字 2 出现的次数*/

#include<stdio.h>

int main() {
	int start_num, end_num,count=0;
	//输入两个正整数
	scanf("%d %d", &start_num, &end_num);

	for (int i = start_num; i <= end_num; i++) {
		int j = i;
		do{
			if (j % 10 == 2)
				count++;
			j /= 10;
		} while (j > 0);
	}

	printf("%d", count);
	return 0;
}