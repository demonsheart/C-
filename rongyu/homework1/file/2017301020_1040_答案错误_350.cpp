#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int isNumber(char s[100]){
    int length,a[100],i,number=1;
    length=strlen(s);
    for(i=length-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            number=number+(s[i]-'0')*pow(10,length-1-i);
        }
        else{
            return -1;
        }
    }
    return number;
}

int main(){
    int t;
    char s[100];
    cin>>t;
    while(t--){
        cin>>s;
        cout<<isNumber(s)<<endl;
    }
    return 0;
}

