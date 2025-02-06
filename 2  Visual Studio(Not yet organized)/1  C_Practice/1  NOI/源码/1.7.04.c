/*��Ϸ����ʯͷ�����������ʯͷ������������
���ڣ���Ҫ��дһ���������ж�ʯͷ���Ӳ���Ϸ�Ľ����
�������N+1�У�
��һ����һ������N����ʾһ��������N����Ϸ��1 <= N <= 100��
������N�е�ÿһ�а��������ַ�������ʾ��Ϸ������Player1��Player2��ѡ��ʯͷ�����ӻ����ǲ�����
S1 S2
�ַ���֮���Կո����S1,S2ֻ����ȡֵ��{"Rock", "Scissors", "Paper"}����Сд���У��С�
�������N�У�ÿһ�ж�Ӧһ��ʤ���ߣ�Player1����Player2����������Ϸ����ƽ�֣������Tie��*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 10 // ����ÿ���ַ�������󳤶�

// �жϽ���ĺ���
const char* determine_winner(const char* player1, const char* player2) {
    if (strcmp(player1, player2) == 0) {
        return "Tie"; // ƽ��
    } else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
               (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
               (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return "Player1"; // Player1 ʤ
    } else {
        return "Player2"; // Player2 ʤ
    }
}

int main(void) {
    int rounds;
    scanf("%d", &rounds);
    
    // Ϊÿ���ַ��������㹻�ռ�
    char* round1 = (char*)malloc(rounds * MAX_STRING_LENGTH * sizeof(char));
    char* round2 = (char*)malloc(rounds * MAX_STRING_LENGTH * sizeof(char));
    
    if (round1 == NULL || round2 == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1; // ���ش������
    }

    // ��ȡÿһ�ֵ�ѡ��
    for (int i = 0; i < rounds; i++) {
        scanf("%s", round1 + i * MAX_STRING_LENGTH);
        scanf("%s", round2 + i * MAX_STRING_LENGTH);
    }

    // ������
    for (int i = 0; i < rounds; i++) {
        const char* result = determine_winner(round1 + i * MAX_STRING_LENGTH, round2 + i * MAX_STRING_LENGTH);
        printf("%s\n", result);
    }

    // �ͷŷ�����ڴ�
    free(round1);
    free(round2);
    
    return 0;
}

