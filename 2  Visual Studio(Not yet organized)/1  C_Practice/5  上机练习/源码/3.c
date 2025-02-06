#include<stdio.h>

int main() {
	float price, sum;
	int n;
	scanf("%f %d", &price, &n);
	sum = price * n;
	printf("Sum is %.1f yuan.", sum);
	return 0;
}