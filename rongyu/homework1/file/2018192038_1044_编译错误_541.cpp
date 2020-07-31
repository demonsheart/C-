#include<iostream>
#include<cstring>
#include<limits>
using namespace std;

int main(){
    int t,m,n,i,j,mi,ma;
    int **p;
    cin>>t;
    while(t--){
        cin>>m;
        cin>>n;
        p=new int*[n];
        for(i=0;i<n;i++){
            p[i]=new int[m];
        }
        mi=INT_MAX;ma=INT_MIN;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>p[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(p[i][j]>ma){
                    ma=p[i][j];
                }
                if(p[i][j]<mi){
                    mi=p[i][j];
                }
            }
        }

        cout<<mi<<' '<<ma<<endl;
    }
    return 0;
}

