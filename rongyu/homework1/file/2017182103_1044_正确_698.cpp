#include <iostream>
using namespace std;
int main()
{
    int time;
    cin>>time;
    for(int i=0; i<time; i++)
    {
        int n,m;
        int **num;
        cin>>n>>m;
        num = new int*[n];
        for(int i=0; i<n; i++)
        {
            num[i]=new int[m];
            for(int j=0; j<m; j++)
            {
                cin>>num[i][j];
            }
        }
        
        int max = num[0][0];
        int min = num[0][0];
        for(int i=0; i<n; i++)
        {
            for(int j =0; j<m; j++)
            {
                if(num[i][j]>max)
                    max=num[i][j];
                else if(num[i][j]<min)
                    min=num[i][j];
            }
        }

        cout<<min<<" "<<max<<endl;
        
        for(int i=0; i<n; i++)
            delete []num[i];
            delete[]num;
    }
    return 0;
}


