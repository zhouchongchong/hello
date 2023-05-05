#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(int argc, char const *argv[]){
    float haTemperature, seTemperature;
    printf("请输入华氏温度：");
    scanf("%f", &haTemperature);

    seTemperature = (haTemperature - FREEZING_PT) * SCALE_FACTOR;
    printf("华氏温度为：%.2f, 其对应的摄氏温度问为：%.2f", haTemperature,seTemperature);
    return 0;
}