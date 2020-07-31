#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t,mo;
    const char *month[13]={NULL,"January","february","March","April","May","June","July","August","September","October","November","December"};
    cin>>t;
    while(t--){
        cin>>mo;
        if(mo>=0&&mo<=12){
        	cout<<month[mo]<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
    }
    return 0;
}

