/*Julius Caesar����ʹ�ù�һ�ֺܼ򵥵����롣���������е�ÿ���ַ�������������ĸ���к�5λ��Ӧ���ַ������棬
�����͵õ������ġ������ַ�A��F�����档���������ĺ��������ַ��Ķ�Ӧ��ϵ��

����
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
����
V W X Y Z A B C D E F G H I J K L M N O P Q R S T U

��������ǶԸ��������Ľ��н��ܵõ����ġ�

����Ҫע����ǣ������г��ֵ���ĸ���Ǵ�д��ĸ��������Ҳ��������ĸ���ַ�������Щ�ַ����ý��н��롣

����
һ�У��������ģ����Ĳ�Ϊ�գ��������е��ַ���������200��
���
���һ�У������Ķ�Ӧ�����ġ�*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define len_max 80

int main(void) {
	char* intelligence = (char*)malloc(len_max * sizeof(char));
	fgets(intelligence, len_max, stdin);
	intelligence[strcspn(intelligence, "\n")] = 0;

	size_t len = strlen(intelligence);

	for (int i = 0; i < len; i++) {
		if ((intelligence[i] >= 'A' && intelligence[i] <= 'E'))
		{
			intelligence[i] += 21;
		}
		else if (intelligence[i] >= 'F' && intelligence[i] <= 'Z')
			intelligence[i] -= 5;
		else
			continue;
	}
	intelligence[len] = '\0';

	printf("%s", intelligence);

	free(intelligence);
	return 0;
}