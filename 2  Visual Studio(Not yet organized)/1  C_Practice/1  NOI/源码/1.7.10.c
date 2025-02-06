/*Julius Caesar曾经使用过一种很简单的密码。对于明文中的每个字符，将它用它字母表中后5位对应的字符来代替，
这样就得到了密文。比如字符A用F来代替。如下是密文和明文中字符的对应关系。

密文
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
明文
V W X Y Z A B C D E F G H I J K L M N O P Q R S T U

你的任务是对给定的密文进行解密得到明文。

你需要注意的是，密文中出现的字母都是大写字母。密文中也包括非字母的字符，对这些字符不用进行解码。

输入
一行，给出密文，密文不为空，而且其中的字符数不超过200。
输出
输出一行，即密文对应的明文。*/

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