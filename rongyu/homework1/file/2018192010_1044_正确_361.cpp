#include <iostream>
#include<cmath>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
int main()
{

    int i,j,t,n,m;
    int **num;
    cin >> t;
    while(t--)
    {
        cin>>n>>m;
        num = new int*[n];
        for(i=0; i<n; i++)
            num[i] =new int[m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cin>>num[i][j];
        }
        int min=9999,max=0;
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                if(min>num[i][j])
                    min=num[i][j];
                if(max<num[i][j])
                    max=num[i][j];
            }
        cout << min <<" "<< max <<endl;
    }
    return 0;
}

