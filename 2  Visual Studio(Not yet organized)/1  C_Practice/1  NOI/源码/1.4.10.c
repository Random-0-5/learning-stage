#include<stdio.h>

/*����һ��ѧ�������ĺ���ѧ�ɼ����ж����Ƿ�ǡ����һ�ſβ����񣨳ɼ�С��60�֣�
������ǡ����һ�ſβ��������1���������0*/
void chengji()
{
    int a, b;
    printf("���������Ƴɼ����ո������\n");
    scanf("%d %d", &a, &b);
    int coust = 0;
    if (a < 60) {
        coust++;
    }
    if (b<60) {
        coust++;
    }
    if(coust==1)
        printf("%d\n", coust);
    else
        printf("0\n");
}

int main()
{
    chengji();
    system("pause");
    return 0;
}
