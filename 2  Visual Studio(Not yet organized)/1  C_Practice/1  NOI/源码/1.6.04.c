/*��һ�������е�ֵ���������´�š����磬ԭ����˳��Ϊ8,6,5,4,1��Ҫ���Ϊ1,4,5,6,8��
����
����Ϊ���У���һ��������Ԫ�صĸ���n��1<n<100)���ڶ�����n��������ÿ��������֮���ÿո�ָ���
���
���Ϊһ�У��������������������ÿ��������֮���ÿո�ָ���*/

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