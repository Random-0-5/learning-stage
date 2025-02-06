#include<stdio.h>
#define PI 3.14

int main() {
	int r1, r2;
	scanf("%d,%d", &r1, &r2);
	double area = PI * r2 * r2 - PI * r1 * r1;
	printf("圆环面积为：%.3lf", area);
	return 0;
}