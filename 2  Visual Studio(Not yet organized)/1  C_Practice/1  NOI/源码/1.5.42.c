/*输入
输入一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；
第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
输出画出的图形*/

#include<stdio.h>

int main(void) {
	int high, wide, heart;
	char symblo;
	scanf("%d %d %c %d", &high, &wide, &symblo, &heart);

	for (int i = 1; i <= high; i++) {
		for (int j = 1; j <= wide; j++) {
			if (heart == 1 ) {
				printf("%c", symblo);
			}
			else if (heart == 0) {
				if (i == high || i == 1 || j == wide || j == 1) {
					printf("%c", symblo);
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}