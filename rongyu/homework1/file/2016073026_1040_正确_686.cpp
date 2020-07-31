#include <iostream>
#include <cstring>
using namespace std;

int isNumber(char *s){
    while(*s){
        if(*s<'0' || *s>'9')
            return 0;
        s++;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        char str[100];
        cin>>str;
        int output=0;
        if(isNumber(str)){
            char *p=str;
            while(*p=='0')
                p++;
            while(*p){
                output=*p-'0'+output*10;
                p++;
            }
        }
        else
            output=-1;
        cout<<output<<endl;
    }
    return 0;
}

