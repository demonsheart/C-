#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double rate,capital,deposit,m,x;
    scanf("%lf,%d,%lf",&rate,&n,&capital);
    m=rate+1;
    x=pow(m,n);
    deposit=capital*x;
    printf("deposit=%.3lf\n",deposit);
	system("pause");
    return 0;
}
