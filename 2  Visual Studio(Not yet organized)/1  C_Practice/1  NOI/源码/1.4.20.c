/*利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)求一元二次方程ax2+ bx + c =0的根，其中a不等于0。
输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程ax2 + bx + c =0的系数。
若b2 = 4 * a * c,则两个实根相等，则输出形式为：x1=x2=...。
若b2 > 4 * a * c,则两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1>x2。
若b2 < 4 * a * c，则有两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，即x1的虚部系数大于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
所有实数部分要求精确到小数点后5位，数字、符号之间没有空格。*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // 输入系数
    printf("请输入 a, b, c（以空格隔开）：\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 检查 a 是否为 0
    if (a == 0) {
        printf("a 不能为 0。\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;  // 计算判别式
    double realPart = -b / (2 * a);  // 实部
    double imagPart, x1, x2;

    if (discriminant > 0) {  // 两个不同的实根
        x1 = (realPart + sqrt(discriminant) / (2 * a));
        x2 = (realPart - sqrt(discriminant) / (2 * a));
        if (x1 < x2) {  // 保证 x1 > x2
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
    } else if (discriminant == 0) {  // 两个相等的实根
        x1 = x2 = realPart;
        printf("x1=x2=%.5lf\n", x1);
    } else {  // 两个虚根
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
