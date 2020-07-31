#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int tt;
    char a[20][26]={"January","February","March","April","May","June","July","Aguest","September","October","November","December"};
    char *p[20];
    for(int i=0;i<12;i++){
        p[i+1]=a[i];
    }
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if(n>0&&n<13)
            cout<<p[n]<<endl;
        else
            cout<<"error"<<endl;
    }
}

