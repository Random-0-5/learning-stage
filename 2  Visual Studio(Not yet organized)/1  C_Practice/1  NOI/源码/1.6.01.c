/*输出一个整数序列中与指定数字相同的数的个数。
输入包含三行：
第一行为N，表示整数序列的长度(N <= 100)；
第二行为N个整数，整数之间以一个空格分开；
第三行包含一个整数，为指定的整数m。
输出为N个数中与m相同的数的个数。*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, count = 0;  // 初始化count为0
    printf("请输入数组大小: ");
    scanf("%d", &n);  // 读取数组大小

    // 动态分配内存
    int *array = (int *)malloc(n * sizeof(int)); 
    if (array == NULL) {  // 检查内存分配是否成功
        printf("内存分配失败\n");
        return 1; // 返回错误代码
    }

    // 输入数组元素
    printf("请输入 %d 个整数:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); // 使用 &array[i] 读取数组元素
    }

    // 输入需要查找的元素
    printf("请输入要查找的整数 m: ");
    scanf("%d", &m);

    // 统计 m 在数组中的出现次数
    for (int i = 0; i < n; i++) {
        if (array[i] == m) {
            count++;
        }
    }

    // 输出结果
    printf("%d 在数组中出现的次数是: %d\n", m, count);

    // 释放动态分配的内存
    free(array);
    
    return 0;
}
