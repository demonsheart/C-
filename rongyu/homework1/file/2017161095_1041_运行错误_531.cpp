#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,t;
    char *p[12];
    for(i=0;i<12;i++)
        p[i] = new char [50];
    p[0] = "January";
    p[1] = "February";
    p[2] = "March";
    p[3] = "April";
    p[4] = "May";
    p[5] = "June";
    p[6] = "July";
    p[7] = "August";
    p[8] = "September";
    p[9] = "October";
    p[10] = "November";
    p[11] = "December";
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n>=1&&n<=12)
            printf("%s\n",p[n-1]);
        else
            printf("error\n");
    }
    delete []p;
    return 0;
}

