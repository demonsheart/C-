#include<iostream>
#include<cstring>
using namespace std;

int isNumber(char *s);
int main(){
    int t,i,flag,num,m,mul;
    char a[100];
    char *p;
    cin>>t;
    while(t--){
        flag=0;
        mul=1;
        num=0;
        cin>>a;
        p=a;
        flag=isNumber(p);
        if(flag){
            m=strlen(p);
            for(i=0;i<m;i++){
                num+=(p[m-i-1]-'0')*mul;
                mul*=10;
            }
            cout<<num<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

int isNumber(char *s){
    int i,len;
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]<'0'||s[i]>'9'){
            return 0;
        }
    }
    return 1;
}

