/*��һ�������Σ��ĸ��ǵ����꣨x,y)�ֱ��ǣ�1��-1������1��1������-1��-1������-1��1��
x�Ǻ��ᣬy�����ᡣдһ�������ж�һ�������ĵ��Ƿ�������������ڣ����������α߽磩*/

#include <stdio.h>

void weizhi();

int main()
{
    weizhi();  // ���ú���
    return 0;
}

void weizhi()
{
    float x, y;
    printf("�����������������ո��������\n");
    scanf("%f %f", &x, &y);
    if(x>=-1&&x<=1&&y>=-1&&y<=1)
        printf("YES\n");
    else
        printf("no\n");

}
