/*在北大校园里,没有自行车,上课办事会很不方便.
但实际上,并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间.
假设找到自行车,开锁并车上自行车的时间为27秒;停车锁车的时间为23秒;步行每秒行走1.2米,骑车每秒行走3.0米。
请判断走不同的距离去办事,是骑车快还是走路快。*/

#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n); // 输入距离

    double bike_time = n / 3.0 + 27.0 + 23.0; // 骑车时间
    double walk_time = n / 1.2; // 步行时间

    if (bike_time < walk_time) {
        printf("Bike\n"); // 骑车快
    } else if (bike_time > walk_time) {
        printf("Walk\n"); // 步行快
    } else {
        printf("All\n"); // 一样快
    }

    return 0;
}
