/*将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
输入
输入为两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。
输出
输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int* array = (int*)malloc(n * sizeof(int)); 

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", array[n - 1 - i]);
	}
	free(array);
	return 0;
}