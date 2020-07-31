#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char s[]){
    int n=strlen(s);
    int ans=0;
    int weight=1;
    for(int i=n-1;i>=1;--i){
        if(s[i]>='0'&&s[i]<='9'){
                ans+=(s[i]-'0')*weight;
                weight*=10;
        }
        else
            return -1;
    }
        if(s[0]>='1'&&s[0]<='9'){
                ans+=(s[0]-'0')*weight;
            return ans;
        }else if(s[0]=='0')return ans;
        else{
            return -1;
        }

}


int main(){
    int T=0;
    cin>>T;
    char s[1000];
    while(T--){
        cin>>s;
        cout<<isNumber(s)<<endl;
    }
    return 0;
}
