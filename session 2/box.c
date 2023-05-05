#include <stdio.h>
int main(void)
{
    int length, heigth, width, volume, weigth;
    length = 12;
    heigth = 10;
    width =8;
    volume = length * width * heigth;
    weigth = (volume + 165) / 166;

    printf("box size:%dx%dx%d \n", length, width, heigth);
    printf("volume:%d \n", volume);
    printf("weigth: %d \n", weigth);

    return 0;
}