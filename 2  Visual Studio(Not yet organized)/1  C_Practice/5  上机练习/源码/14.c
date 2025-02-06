/*已有一个已正序排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
输入描述
第一行，原始数列。 第二行，需要插入的数字。*/

#include <stdio.h>

int main(void) {
    int num[10]; 
    int n; 
    int i, j;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    scanf("%d", &n);

    for (i = 0; i < 9; i++) {
        if (num[i] > n) { 
            break;
        }
    }

    for (j = 8; j >= i; j--) { 
        num[j + 1] = num[j]; 
    }
    
    num[i] = n;

    for (i = 0; i < 10; i++) { 
        printf("%d ", num[i]);
    }
    
    return 0;
}
