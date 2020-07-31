#include <iostream>

using namespace std;

int main()
{
    int time;
    cin>>time;
    for(int i=0;i<time;i++){
    const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
    int m;
    cin>>m;
    if(m>0&&m<13){
        cout<<month[m]<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
    }
    return 0;
}

