/*���鱨���ݹ����У�Ϊ�˷�ֹ�鱨���ػ�������Ҫ���鱨��һ���ķ�ʽ���ܣ��򵥵ļ����㷨��Ȼ��������ȫ�����鱨�����룬
����Ȼ�ܷ�ֹ�鱨�����׵�ʶ�����Ǹ���һ�����ĵļ��ܷ������Ը�����һ���ַ����������д�a-y��A-Y����ĸ��������ĸ�����
��z��Z��a��A�������������ĸ�ַ����䣬��ɵõ�һ���򵥵ļ����ַ�����

����
����һ�У�����һ���ַ���������С��80���ַ���
���
���ÿ���ַ����ļ����ַ�����*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define len_max 80

int main(void) {
	char* intelligence = (char*)malloc(len_max * sizeof(char));
	fgets(intelligence, len_max, stdin);
	intelligence[strcspn(intelligence, "\n")] = 0;

	size_t len=strlen(intelligence);

	for (int i = 0; i < len; i++) {
		if ((intelligence[i] >= 'a' && intelligence[i] <= 'y') ||
			(intelligence[i] >= 'A' && intelligence[i] <= 'Y'))
		{
			intelligence[i] += 1;
		}
		else if (intelligence[i] == 'z' || intelligence[i] == 'Z')
			intelligence[i] -= 25;
		else
			continue;
	}
	intelligence[len] = '\0';

	printf("%s", intelligence);

	free(intelligence);
	return 0;
}