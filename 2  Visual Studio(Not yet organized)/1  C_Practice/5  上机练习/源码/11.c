/*有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。*/

#include <stdio.h>

int main(void) {
    float sum = 0.0; 
    float numerator = 2.0;
    float denominator = 1.0; 

    for (int i = 0; i < 20; i++) {
        sum += numerator / denominator; 
        float temp = numerator; 
        numerator += denominator; 
        denominator = temp; 
    }

    printf("%.6lf\n", sum);
    
    return 0;
}
