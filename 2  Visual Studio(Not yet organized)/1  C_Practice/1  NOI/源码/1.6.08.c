/*ʯͷ�������ǳ����Ĳ�ȭ��Ϸ��ʯͷʤ����������ʤ������ʤʯͷ����������˳�ȭһ�����򲻷�ʤ����
һ�죬СA��СB��������ʯͷ����������֪���ǵĳ�ȭ�����������Թ��ɵģ�
���磺��ʯͷ-��-ʯͷ-����-ʯͷ-��-ʯͷ-�����������������ԡ�ʯͷ-��-ʯͷ-������Ϊ���ڲ���ѭ���ġ����ʣ�СA��СB����N��֮��˭Ӯ�������ࣿ
����������С�
��һ�а�������������N��NA��NB���ֱ��ʾ����N�֣�СA��ȭ�����ڳ��ȣ�СB��ȭ�����ڳ��ȡ�0 < N,NA,NB < 100��
�ڶ��а���NA����������ʾСA��ȭ�Ĺ��ɡ�
�����а���NB����������ʾСB��ȭ�Ĺ��ɡ�
���У�0��ʾ��ʯͷ����2��ʾ����������5��ʾ��������������������֮���õ����ո������
���
���һ�У����СAӮ�������࣬���A�����СBӮ�������࣬���B��������˴�ƽ�����draw��*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, na, nb;
    scanf("%d %d %d", &n, &na, &nb); // ��ȡN, NA, NB

    int* combination1 = (int*)malloc(na * sizeof(int)); // СA�ĳ�ȭ���
    int* combination2 = (int*)malloc(nb * sizeof(int)); // СB�ĳ�ȭ���

    // ��ȡСA�ĳ�ȭ����
    for (int i = 0; i < na; i++) {
        scanf("%d", &combination1[i]);
    }
    // ��ȡСB�ĳ�ȭ����
    for (int i = 0; i < nb; i++) {
        scanf("%d", &combination2[i]);
    }

    int aWins = 0, bWins = 0; // ��ʼ��ʤ������

    // ����N��
    for (int i = 0; i < n; i++) {
        int aMove = combination1[i % na]; // СA�ĳ�ȭ
        int bMove = combination2[i % nb]; // СB�ĳ�ȭ

        // �ж�ʤ��
        if (aMove == bMove) {
            continue; // ƽ�֣����Ʒ�
        } else if ((aMove == 0 && bMove == 2) || // A��ʯͷ��B������
                   (aMove == 2 && bMove == 5) || // A��������B����
                   (aMove == 5 && bMove == 0)) { // A������B��ʯͷ
            aWins++; // СAӮ
        } else {
            bWins++; // СBӮ
        }
    }

    // ������
    if (aWins > bWins) {
        printf("A\n");
    } else if (bWins > aWins) {
        printf("B\n");
    } else {
        printf("draw\n");
    }

    // �ͷŶ�̬������ڴ�
    free(combination1);
    free(combination2);

    return 0;
}
