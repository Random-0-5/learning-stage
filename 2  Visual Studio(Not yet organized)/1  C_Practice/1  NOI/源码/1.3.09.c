#include <stdio.h>

int main() {
    double r;
    
    printf("ÇëÊäÈëÔ²µÄ°ë¾¶ r£¨0 < r <= 10,000£©£º");
    scanf("%lf", &r);
    
    double diameter = 2 * r;
    double circumference = 2 * 3.14159 * r; 
    double area = 3.14159 * r * r; 

    printf("%.4lf %.4lf %.4lf\n", diameter, circumference, area);
    
    return 0;
}
