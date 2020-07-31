#include <iostream>

using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int **num=new int*[n];
        for(int i=0;i<m;i++){
            num[i]=new int[m];
        }
        int max1=0;
        int min1=9999;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>num[i][j];
                if(num[i][j]>max1){
                    max1=num[i][j];
                }
                if(num[i][j]<min1){
                    min1=num[i][j];
                }
            }
        }
        cout<<min1<<" "<<max1<<endl;
    }
    return 0;
}

