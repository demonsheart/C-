#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int m,n,mi=1e9,ma=-1e9;
        cin>>m>>n;
        int **p=new int*[m];
        for(int i=0;i<m;i++)
            p[i]=new int[n];
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cin>>p[i][j];
            mi=min(mi,p[i][j]);
            ma=max(ma,p[i][j]);
        }
        cout<<mi<<' '<<ma<<endl;
    }
}

