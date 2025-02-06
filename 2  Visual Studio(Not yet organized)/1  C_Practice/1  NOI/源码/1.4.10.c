#include<stdio.h>

/*给出一名学生的语文和数学成绩，判断他是否恰好有一门课不及格（成绩小于60分）
若该生恰好有一门课不及格，输出1；否则输出0*/
void chengji()
{
    int a, b;
    printf("请输入两科成绩（空格隔开）\n");
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
