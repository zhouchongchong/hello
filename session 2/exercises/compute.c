#include <stdio.h>

int main(int argc, char const *argv[]){
    int x, result;
    printf("请输入 X 的值:");
    scanf("%d", &x);
    // 3x^5 + 2x^4 - 5x^3 -x^2 +7x - 6
    result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - 2 * x * x +7 * x - 6;
    printf("结果为：%d", result);
    return 0;
}