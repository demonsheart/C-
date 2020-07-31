#include <stdio.h>
int main()
{
    int profit;
    float award;
    printf("请输入当月利润（单位为万元）：");
    scanf("%d", &profit);
    if (profit <= 10)
        award = profit * 0.1;
    else if (profit > 10 && profit <= 20)
        award = 10 * 0.1 + (profit - 10) * 0.075;
    else if (profit > 20 && profit <= 40)
        award = 10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05;
    else if (profit > 40)
        award = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
    printf("应发放奖金(单位为万元)为：%.2f", award);
    return 0;
}