#include<iostream>

using namespace std;

int main(){
    int t,num;
    char *rl[13]={"error","January" ,"February","March","April","May","June","July","August","September","October","November","December"};
    cin>>t;
    while(t--){
        cin>>num;
        if(num>=1&&num<=12)
            cout<<rl[num]<<endl;
        else
            cout<<"error"<<endl;
    }
    return 0;
}

