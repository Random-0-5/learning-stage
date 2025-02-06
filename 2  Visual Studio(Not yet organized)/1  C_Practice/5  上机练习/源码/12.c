#include <stdio.h>

int main(void) {
    int n; 
    double sum = 0.0; 

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int age;
        scanf("%d", &age);
        sum += age; 
    }

    double average = sum / n;
    printf("%.2lf\n", average);

    return 0;
}
