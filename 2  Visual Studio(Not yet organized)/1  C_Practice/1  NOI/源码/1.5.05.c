/*����ʦ���ڵġ�������ۡ����ſ����п��Ըոս���������֪��������ȡ�õ���߷�����
��Ϊ�����Ƚ϶࣬������������齻������������ȽϷ��㡣���ܰ�����ʦ������������
����
��һ��Ϊ����n��1 <= n < 100������ʾ�μ���ο��Ե�����.
�ڶ�������n��ѧ���ĳɼ�������������֮���õ����ո���������гɼ���Ϊ0��100֮���������
���
���һ������������ߵĳɼ���*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* grade = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &grade[i]);
    }

    int max_score = grade[0]; 
    for (int i = 1; i < n; i++) {
        if (grade[i] > max_score) {
            max_score = grade[i]; 
        }
    }

    printf("%d\n", max_score); 

    free(grade); 
    return 0;
}
