#include <stdio.h>
#define PERSENT ((100.00 + 5.00) / 100.00)

int main(int argc, char const *argv[]){
    float save_dollars, result;

    printf("请输入你将要存的数值：");
    scanf("%f", &save_dollars);

    result = save_dollars * PERSENT;

    printf("你将获得%.2f", result);
    return 0;
}