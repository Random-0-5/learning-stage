/*Ӣ����ܶ൥�ʾ�����ͬ��ǰ׺������һ���ֵ䣬��ָ��һ������ A��һ���϶̵��ַ�������ͳ���ֵ����� AΪǰ׺�ĵ����������� A ������
**�����ʽ**
�������ݵ� 1 ��Ϊ������ N��N_��1.2��10^5����ʾ�ֵ��еĵ�������
�������� N�У�ÿ��Ϊһ����Сд��ĸ��ɵĵ��ʣ����ʰ��ֵ������У�����û���ظ���ÿ�����ʲ����� 20����ĸ��
�ֵ�֮����һ�У��ǵ��� A��
**�����ʽ**
����ֵ����Ե��� A Ϊǰ׺�ĵ����������û�У������ 0
**��������**
10
a
alien
born
less
lien
never
nevertheless
new
newborn
zebra
ne
**�������**
4*/

#include <stdio.h>
#include <string.h>

#define MAX_N 120000  // ������󵥴���Ϊ 120000
#define MAX_LENGTH 21 // ���嵥�ʵ���󳤶�Ϊ 21

char words[MAX_N][MAX_LENGTH]; // ����һ����ά���飬���ڴ洢��� 120000 �����ʣ�ÿ������� 20 ���ַ�������һ�������� '\0'����

// ���ֲ��ң��ҵ�һ���� prefix��ǰ׺����ͷ�ĵ��ʵ�λ��
int find_start_index(int n, const char* prefix) {
    int low = 0, high = n; // ��ʼ�����ֲ��ҵķ�Χ
    while (low < high) {
        int mid = (low + high) / 2; // �����м�λ��
        if (strcmp(words[mid], prefix) < 0) { // ����м䵥��С��ǰ׺
            low = mid + 1; // �ƶ����Ұ벿��
        } else {
            high = mid; // �ƶ�����벿��
        }
    }
    return low; // �����ҵ��Ŀ�ʼ����
}

// ���ֲ��ң��ҵ�һ���� prefix ����һ���ַ����������� 'z'����ͷ�ĵ��ʵ�λ��
int find_end_index(int n, const char* prefix) {
    char next_prefix[MAX_LENGTH]; // ����һ���������洢��һ��ǰ׺
    strcpy(next_prefix, prefix); // ��ǰ׺���Ƶ� next_prefix
    next_prefix[strlen(prefix)] = 'z' + 1; // ����볬�� 'z' ���ַ�
    next_prefix[strlen(prefix) + 1] = '\0'; // ȷ���ַ����� '\0' ����
    
    int low = 0, high = n; // ��ʼ�����ֲ��ҵķ�Χ
    while (low < high) {
        int mid = (low + high) / 2; // �����м�λ��
        if (strcmp(words[mid], next_prefix) < 0) { // ����м䵥��С����һ��ǰ׺
            low = mid + 1; // �ƶ����Ұ벿��
        } else {
            high = mid; // �ƶ�����벿��
        }
    }
    return low; // �����ҵ��Ľ�������
}

int main() {
    int N; // ����һ������ N�����ڴ洢�ֵ��еĵ�����
    scanf("%d", &N); // �������ж�ȡ��������
    
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]); // ѭ����ȡÿ������
    }
    
    char A[MAX_LENGTH]; // ����һ������ A ���ڴ洢�����ǰ׺
    scanf("%s", A); // �������ж�ȡǰ׺
    
    int start_index = find_start_index(N, A); // ������ A ��ͷ�ĵ��ʵĿ�ʼ����
    int end_index = find_end_index(N, A); // ������ A ��ͷ�ĵ��ʵĽ�������
    
    printf("%d\n", end_index - start_index); // ����� A Ϊǰ׺�ĵ�������
    
    return 0; // �������
}
