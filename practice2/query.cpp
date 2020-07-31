#include<stdio.h>
void query(int *p, int n, int order, int *r1, int *r2, int *r3);
int main()
{
int t,a[100],n,order,r1,r2,r3;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; ++i)
          scanf("%d",&a[i]);
        scanf("%d",&order);
        query(a, n, order, &r1, &r2 ,&r3);
        printf("%d %d\n%d\n",r1,r2,r3);
    }
    
}
void query(int *p, int n, int order, int *r1, int *r2, int *r3)
{
int *mid = p+n/2;
    *r1 = *--mid;
    ++mid;
    *r2 = *++mid;
    *r3 = *(p+order-1);
}