#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
    int t,m,n;
    cin >> t;
    cin.ignore(100,'\n');
    //string str1,str2;
    int **p;
    while (t--)
    {
        cin >> m >>n;
        p=new int* [m];
        for (int i=0;i<m;i++)
            p[i]=new int [n]();

        int minn,maxx;

        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin >> p[i][j];
                if (i==0&&j==0) {minn=p[0][0];maxx=p[0][0];}
                if (p[i][j]>maxx) maxx=p[i][j];
                if (p[i][j]<minn) minn=p[i][j];
            }
        }

        cout << minn << " " << maxx << endl;
        delete []p;

    }
    return 0;
}
