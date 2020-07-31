#include<stdio.h>
void sortThreeNum(int *p1,int *p2,int *p3);
int main()
{
int t, a, b, c;
int *p1 = &a, *p2 = &b, *p3 = &c;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",p1,p2,p3);
        sortThreeNum(p1, p2, p3);
        printf("%d %d %d\n",*p1,*p2,*p3);
    }
    
}
void sortThreeNum(int *p1,int *p2,int *p3)
{
int a[3];
    a[0] = *p1;
    a[1] = *p2;
    a[2] = *p3;
    for(int i=0; i<=1; ++i)
    {
        for(int j=i+1; j<=2; ++j)
        {
            if(a[i] < a[j])
            {
                int c;
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    *p1 = a[0];
    *p2 = a[1];
    *p3 = a[2];
}