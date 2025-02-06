/*个位数上的数字减去千位数上的数字，再减去百位数上的数字， 再减去十位数上的数字的结果大于零。*/

#include <stdio.h>

void calculateDigitsDifference() {
    int begin, end;
    printf("查找范围: ");
    scanf("%d %d", &begin, &end);

    // 确保begin小于end
    if (begin > end) {
        int temp = begin;
        begin = end;
        end = temp;
    }

    printf("符合条件的数字及其计算结果:\n");
    // 遍历范围内的每个数字
    for (int i = begin; i <= end; i++) {
        int digits[10]; // 存储每位数字，假设最多10位
        int count = 0;  // 记录实际位数
        int j = i;
        
        // 提取每位数字
        while (j > 0) {
            digits[count] = j % 10; // 存储当前位
            j /= 10;
            count++;
        }

        // 从个位数开始计算
        int sum = digits[0]; // 初始设为个位数
        for (int k = 1; k < count; k++) {
            sum -= digits[k]; // 减去其他位
        }

        // 输出所有符合条件的数字
        if (sum > 0) {
            printf("%d 的计算结果符合条件，结果为: %d\n", i, sum);
        }
    }
}

int main() {
    calculateDigitsDifference();
    return 0;
}
