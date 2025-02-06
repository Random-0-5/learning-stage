/*有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1）
x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）*/

#include <stdio.h>

void weizhi();

int main()
{
    weizhi();  // 调用函数
    return 0;
}

void weizhi()
{
    float x, y;
    printf("请输入两个整数（空格隔开）：\n");
    scanf("%f %f", &x, &y);
    if(x>=-1&&x<=1&&y>=-1&&y<=1)
        printf("YES\n");
    else
        printf("no\n");

}
