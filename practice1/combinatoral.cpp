#include<iostream>
using namespace std;
int cb(int m,int n);
int jie(int n);
int main(){
    int t,m,n;
    cin>>t;
    while (t--){
        cin>>m>>n;
        if(m<n)
        cout<<"error!"<<endl;
        else{
            int c;
            c = cb(m,n);
            cout<<c<<endl;
        }
    }
    
}
int cb(int m,int n){
    int c;
    c = jie(m)/(jie(n)*jie(m-n));
    return c;
}
int jie(int n){
    int c=1;
    for(int i=2; i<=n; ++i){
        c*=i;
    }
    return c;
}