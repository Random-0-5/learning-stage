/*���ù�ʽx1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)��һԪ���η���ax2+ bx + c =0�ĸ�������a������0��
����һ�У���������������a, b, c������֮����һ���ո�ֿ������ֱ��ʾ����ax2 + bx + c =0��ϵ����
��b2 = 4 * a * c,������ʵ����ȣ��������ʽΪ��x1=x2=...��
��b2 > 4 * a * c,������ʵ�����ȣ��������ʽΪ��x1=...;x2 = ...������x1>x2��
��b2 < 4 * a * c����������������������x1=ʵ��+�鲿i; x2=ʵ��-�鲿i����x1���鲿ϵ�����ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ�� = -b / (2*a), �鲿 = sqrt(4*a*c-b*b) / (2*a)
����ʵ������Ҫ��ȷ��С�����5λ�����֡�����֮��û�пո�*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // ����ϵ��
    printf("������ a, b, c���Կո��������\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // ��� a �Ƿ�Ϊ 0
    if (a == 0) {
        printf("a ����Ϊ 0��\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;  // �����б�ʽ
    double realPart = -b / (2 * a);  // ʵ��
    double imagPart, x1, x2;

    if (discriminant > 0) {  // ������ͬ��ʵ��
        x1 = (realPart + sqrt(discriminant) / (2 * a));
        x2 = (realPart - sqrt(discriminant) / (2 * a));
        if (x1 < x2) {  // ��֤ x1 > x2
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
    } else if (discriminant == 0) {  // ������ȵ�ʵ��
        x1 = x2 = realPart;
        printf("x1=x2=%.5lf\n", x1);
    } else {  // �������
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
