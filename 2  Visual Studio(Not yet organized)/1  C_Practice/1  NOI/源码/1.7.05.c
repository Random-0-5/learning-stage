/*��д����������ַ���s�������ַ���s1��

�����ַ���s1�������£������ַ���s�ĵ�һ���ַ���ASCIIֵ�ӵڶ����ַ���ASCIIֵ���õ���һ�������ַ��� 
�����ַ���s�ĵڶ����ַ���ASCIIֵ�ӵ������ַ���ASCIIֵ���õ��ڶ��������ַ����������ƣ�
ֱ�������ַ���s�ĵ����ڶ����ַ��������ַ��������һ���ַ��ɸ����ַ���s�����һ���ַ�ASCIIֵ��s�ĵ�һ���ַ���ASCIIֵ��

����
����һ�У�һ�����ȴ��ڵ���2��С�ڵ���100���ַ������ַ�����ÿ���ַ���ASCIIֵ������63��
���
���һ�У�Ϊ�任��������ַ��������뱣֤�任����ַ���ֻ��һ��*/

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
			famstr[i] = string[i] + string[i + 1]; // ��ǰ�ַ�����һ���ַ���ASCIIֵ֮��
		}
		else {
			famstr[i] = string[i] + string[0]; // ���һ���ַ��͵�һ���ַ���ASCIIֵ֮��
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