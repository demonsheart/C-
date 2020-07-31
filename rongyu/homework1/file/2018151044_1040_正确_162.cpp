#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int isNumber(char *s){
    int ans=0,len=strlen(s);
    for(int i=0;i<len;i++)
        if(i==0&&s[0]=='-'){
            continue ;
        }
        else if(s[i]<='9'&&s[i]>='0'){
            ans=ans*10+s[i]-'0';
        }
        else
            return -1;
    return s[0]=='-' ? -ans : ans;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        char s[100];
        cin>>s;
        cout<<isNumber(s)<<endl;
    }
}

