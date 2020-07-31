#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int stricmp(char *S,char *T);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        int **num;
        int n,m,i,j,max,min;
        cin>>n>>m;
        num=new int*[n];
        for(i=0;i<n;i++)
            num[i]=new int[m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>num[i][j];
        min=max=num[0][0];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(num[i][j]>max)
                    max=num[i][j];
                if(num[i][j]<min)
                    min=num[i][j];
            }
        }
        cout<<min<<" "<<max<<endl;
        for(i=0;i<n;i++)
            delete []num[i];
        delete []num;
    }
    return 0;
}

