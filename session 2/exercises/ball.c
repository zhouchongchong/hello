#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
    float r, factor;
    printf("请输入圆半径R的值：");
    scanf("%f", &r);
    printf("圆的体积为：%.4f",  M_PI * r * r *r * 4.0 / 3.0);
    return 0;
}
