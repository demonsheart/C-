#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
    cout<<"please input a number: \n";
    int m;
    cin>>m;
    if(m<=1){
        cout<<m<<" isn't a prime.\n";
        system("pause");
        return 1;
    }
    double sqrtm=sqrt(m*1.0);
    for(int i=2;i<=sqrtm;i++){
        if(m%2==0){
            cout<<m<<" isn't a prime.\n";
            system("pause");
            return 1;
        }
    }
    cout<<m<<" is a prime.\n";
    system("pause");
}