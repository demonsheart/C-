#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
 char *pMonth[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;

    scanf("%d", &n);
    if (n < 1 || n > 12)
    {
        printf("error\n");
    }
    else
    {
        printf("%s\n", *(pMonth+n-1));
    }

    }
    return 0;
}
