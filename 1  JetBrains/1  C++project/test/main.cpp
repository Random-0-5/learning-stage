#include <iostream>
#include <cstdlib> // ���ڶ�̬�ڴ����

// ����һ�����������㲢��ӡ�������ĺ�
void printSum(int a, int b) {
    std::cout << a << " �� " << b << " �ĺ��� " << a + b << std::endl;
}

// ������
int main() {
    // �����������ʼ��
    int a = 10;
    int b = 20;
    int sum = a + b;
    std::cout << a << " �� " << b << " �ĺ��� " << sum << std::endl;

    // ���ƽṹ��if-else
    if (a > b) {
        std::cout << a << " ���� " << b << std::endl;
    } else {
        std::cout << a << " ������ " << b << std::endl;
    }

    // ���ƽṹ��forѭ��
    for (int i = 0; i < 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    // ���ƽṹ��whileѭ��
    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        j++;
    }

    // ���ƽṹ��do-whileѭ��
    int k = 0;
    do {
        std::cout << "k = " << k << std::endl;
        k++;
    } while (k < 5);

    // ����
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // ָ��
    int *ptr = &a;
    std::cout << "a ��ֵ: " << a << ", a �ĵ�ַ: " << ptr << std::endl;
    std::cout << "ָ��ָ���ֵ: " << *ptr << std::endl;

    // ��̬�ڴ���䣨C++���
    int *dynamicArr = new int[5];
    if (dynamicArr == nullptr) {
        std::cout << "�ڴ����ʧ��" << std::endl;
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        dynamicArr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "dynamicArr[" << i << "] = " << dynamicArr[i] << std::endl;
    }
    delete[] dynamicArr; // �ͷ��ڴ�

    // ���ú���
    printSum(15, 25);

    return 0;
}