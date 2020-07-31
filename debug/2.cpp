#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double capital, rate, deposit, mid, m; //年利率
    int a;
    char ch;
    printf("Input rate, year, capital:"); //输入提示信息
    scanf("%lf,%d,%lf", &rate, &a, &capital);
    printf("Compound interest (Y/N)?"); //输入提示信息
    scanf(" %c", &ch);                  //输入的字符大小写皆可，即Y或y，N或n皆可

    if (ch == 'Y' || ch == 'y') //复利
    {
        m = 1 + rate;
        mid = pow(m, a);
        deposit = capital * mid;
    }
    else if (ch == 'N' || ch == 'n')
    {
        mid = pow(rate, a);
        deposit = capital * (1 + mid);
    }
    else
        printf("Input error\n");

    printf("deposit = %.4f\n", deposit); //输出格式：
    return 0;
}