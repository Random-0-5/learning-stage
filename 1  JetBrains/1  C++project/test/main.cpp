#include <iostream>
#include <cstdlib> // 用于动态内存分配

// 定义一个函数：计算并打印两个数的和
void printSum(int a, int b) {
    std::cout << a << " 和 " << b << " 的和是 " << a + b << std::endl;
}

// 主函数
int main() {
    // 变量声明与初始化
    int a = 10;
    int b = 20;
    int sum = a + b;
    std::cout << a << " 和 " << b << " 的和是 " << sum << std::endl;

    // 控制结构：if-else
    if (a > b) {
        std::cout << a << " 大于 " << b << std::endl;
    } else {
        std::cout << a << " 不大于 " << b << std::endl;
    }

    // 控制结构：for循环
    for (int i = 0; i < 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    // 控制结构：while循环
    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        j++;
    }

    // 控制结构：do-while循环
    int k = 0;
    do {
        std::cout << "k = " << k << std::endl;
        k++;
    } while (k < 5);

    // 数组
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // 指针
    int *ptr = &a;
    std::cout << "a 的值: " << a << ", a 的地址: " << ptr << std::endl;
    std::cout << "指针指向的值: " << *ptr << std::endl;

    // 动态内存分配（C++风格）
    int *dynamicArr = new int[5];
    if (dynamicArr == nullptr) {
        std::cout << "内存分配失败" << std::endl;
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        dynamicArr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "dynamicArr[" << i << "] = " << dynamicArr[i] << std::endl;
    }
    delete[] dynamicArr; // 释放内存

    // 调用函数
    printSum(15, 25);

    return 0;
}