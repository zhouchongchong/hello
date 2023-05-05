#include <stdio.h>
int main(int argc, char const *argv[])
{

    int length, heigth, width, volume, weigth;
    printf("输入盒子的长：");
    scanf("%d", &length);
    printf("输入盒子的宽：");
    scanf("%d", &width);
    printf("输入盒子的高：");
    scanf("%d", &heigth);
    volume = length * width * heigth;
    weigth = (volume + 165) / 166;

    printf("box size:%dx%dx%d \n", length, width, heigth);
    printf("volume:%d \n", volume);
    printf("weigth: %d \n", weigth);

    return 0;
}
