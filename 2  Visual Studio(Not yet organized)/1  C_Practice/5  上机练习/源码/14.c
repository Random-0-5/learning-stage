/*����һ���������źõ�9��Ԫ�ص����飬������һ����Ҫ��ԭ������Ĺ��ɽ������������С�
��������
��һ�У�ԭʼ���С� �ڶ��У���Ҫ��������֡�*/

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
