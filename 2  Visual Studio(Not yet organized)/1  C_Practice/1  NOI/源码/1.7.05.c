/*编写程序，求给定字符串s的亲朋字符串s1。

亲朋字符串s1定义如下：给定字符串s的第一个字符的ASCII值加第二个字符的ASCII值，得到第一个亲朋字符； 
给定字符串s的第二个字符的ASCII值加第三个字符的ASCII值，得到第二个亲朋字符；依此类推，
直到给定字符串s的倒数第二个字符。亲朋字符串的最后一个字符由给定字符串s的最后一个字符ASCII值加s的第一个字符的ASCII值。

输入
输入一行，一个长度大于等于2，小于等于100的字符串。字符串中每个字符的ASCII值不大于63。
输出
输出一行，为变换后的亲朋字符串。输入保证变换后的字符串只有一行*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define string_num 100

int main(void) {
	char* string = (char*)malloc(string_num * sizeof(char));

	fgets(string, string_num, stdin);
	string[strcspn(string, "\n")] = 0;
	size_t len=strlen(string);

	char* famstr = (char*)malloc(len + 1 * sizeof(char));

	for (int i = 0; i < len; i++) {
		if (i < len - 1) {
			famstr[i] = string[i] + string[i + 1]; // 当前字符和下一个字符的ASCII值之和
		}
		else {
			famstr[i] = string[i] + string[0]; // 最后一个字符和第一个字符的ASCII值之和
		}
	}
	famstr[len] = '\0';

	for (int i = 0; i < len; i++) {
		printf("%c", famstr[i]);
	}
	printf("\n");

	free(string);
	free(famstr);

	return 0;
}