#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        char a ;
        int n;
        cin>>a>>n;
        if(a=='C'){
            char *p=new char [n];
            char maxx=0;
            for(int i=0;i<n;i++){
                cin>>p[i];
                maxx=max(maxx,p[i]);
            }
            cout<<maxx<<endl;
        }
        else if(a=='I'){
            int *p=new int[n];
            double  ans=0;
            for(int i=0;i<n;i++){
                cin>>p[i];
                ans+=p[i];
            }
            cout<<ans/n<<endl;
        }
        else if(a=='F'){
            double *p=new double [n];
            double ans=1e8;
            for(int i=0;i<n;i++){
                cin>>p[i];
                ans=min(ans,p[i]);
            }
            cout<<ans<<endl;
        }
    }
}

