#include<cstdio>
#include<iostream>
#include<cstring>
char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
using namespace std;main(){
    int T=0;
    cin>>T;
    while(T--){
    	int idx=0;
    	cin>>idx;
    	if(idx<=12&&idx>=0)
    		cout<<month[idx-1]<<endl;
    	else
    		cout<<"error\n";
    }
    return 0;
}
