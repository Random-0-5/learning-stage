/*�������
����һ���������� arr ����ʹ�� �����ת ��ɶ����������

һ�μ����ת��ִ�й������£�
ѡ��һ������ k ��1 <= k <= arr.length
��ת������ arr[0...k-1]���±�� 0 ��ʼ��
���磬arr = [3,2,1,4] ��ѡ�� k = 3 ����һ�μ����ת����ת������ [3,2,1] ���õ� arr = [1,2,3,4] ��

��������ʽ������ʹ arr ����ļ����ת��������Ӧ�� k ֵ���С�
�κν����������ҷ�ת������ 10 * arr.length ��Χ�ڵ���Ч�𰸶������ж�Ϊ��ȷ��

ʾ�� 1��
���룺[3,2,4,1]
�����[4,2,4,3]
���ͣ�
����ִ�� 4 �μ����ת��k ֵ�ֱ�Ϊ 4��2��4���� 3��
��ʼ״̬ arr = [3, 2, 4, 1]
��һ�η�ת��k = 4����arr = [1, 4, 2, 3]
�ڶ��η�ת��k = 2����arr = [4, 1, 2, 3]
�����η�ת��k = 4����arr = [3, 2, 1, 4]
���Ĵη�ת��k = 3����arr = [1, 2, 3, 4]����ʱ��������� 

ʾ�� 2��
���룺[1,2,3]
�����[]
���ͣ�
�����Ѿ�������˲���Ҫ��ת�κ����ݡ�
��ע�⣬�������ܵĴ𰸣��� [3��3] ��Ҳ�����ж�Ϊ��ȷ��
 */

#include <stdio.h>
#include <stdlib.h>

// ��ת�����ǰ arrSize ��Ԫ��
void reverse(int* arr, int arrSize) {
    for (int left = 0, right = arrSize - 1; left < right; left++, right--) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}

// ���������
int* pancakeSort(int* arr, int arrSize, int* returnSize) {
    int* ret = (int*)malloc(sizeof(int) * (arrSize - 1) * 2);
    int retSize = 0;
    for (int n = arrSize; n > 1; n--) {
        int index = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[index]) {
                index = i;
            }
        }
        if (index == n - 1) {
            continue;
        }
        reverse(arr, index + 1);
        reverse(arr, n);
        ret[retSize++] = index + 1;
        ret[retSize++] = n;
    }
    *returnSize = retSize;
    return ret;
}

// ��ӡ����
void printArray(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ��ӡ��ת��������
void printOperations(int* operations, int operationsSize) {
    for (int i = 0; i < operationsSize; i++) {
        printf("%d ", operations[i]);
    }
    printf("\n");
}

// ������
int main() {
    int arr[] = {3, 2, 4, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int returnSize = 0;

    int* operations = pancakeSort(arr, arrSize, &returnSize);

    printf("����������: ");
    printArray(arr, arrSize);

    printf("��ת��������: ");
    printOperations(operations, returnSize);

    free(operations);
    return 0;
}
