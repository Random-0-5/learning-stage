/*һ��������strcmp�ɱȽ������ַ����Ĵ�С���ȽϷ���Ϊ�������ַ�����ǰ��������ַ���Ƚϣ���ASCII��ֵ��С�Ƚϣ���
ֱ�����ֲ�ͬ���ַ�������'\0'Ϊֹ�����ȫ���ַ�����ͬ������Ϊ��ͬ��������ֲ���ͬ���ַ���
���Ե�һ������ͬ���ַ��ıȽϽ��Ϊ׼��ע�⣺���ĳ���ַ�������'\0'����һ���ַ�����δ����'\0'����ǰ��С�ں��ߣ���
������Щʱ�����ǱȽ��ַ����Ĵ�Сʱ��ϣ��������ĸ�Ĵ�С������"Hello"��"hello"�ں�����ĸ��Сдʱ����ȵġ�
��дһ������ʵ�ֶ������ַ������к�����ĸ��Сд�Ĵ�С�Ƚϡ�

����
����Ϊ���У�ÿ��һ���ַ������������ַ�������ÿ���ַ������ȶ�С��80��
���
�����һ���ַ����ȵڶ����ַ���С�����һ���ַ�"<"��
�����һ���ַ����ȵڶ����ַ��������һ���ַ�">"��
��������ַ�����ȣ����һ���ַ�"="��*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define len_max 80

int main(void) {
	char* str1 = (char*)malloc(len_max * sizeof(char));
	char* str2 = (char*)malloc(len_max * sizeof(char));

	fgets(str1, len_max, stdin);
	fgets(str2, len_max, stdin);

	str1[strcspn(str1, "\n")] = 0;
	str2[strcspn(str2, "\n")] = 0;
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);

	for (int i = 0; i < len1; i++) {
		str1[i] = tolower(str1[i]);
	}
	for (int i = 0; i < len2; i++) {
		str2[i] = tolower(str2[i]);
	}

	int result = strcmp(str1, str2);
	if (result < 0) {
		printf("<");
	}
	else if (result > 0) {
		printf(">");
	}
	else {
		printf("=");
	}

	free(str1);
	free(str2);
	return 0;
}
