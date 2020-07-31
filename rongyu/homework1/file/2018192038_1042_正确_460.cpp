#include<iostream>
#include<cstring>
using namespace std;

int str(char *S, char *T){
    int len1,len2,i;
    int cnt1=0,cnt2=0;
    len1=strlen(S);len2=strlen(T);
    if(len1>len2)return 1;
    else if(len1<len2) return -1;
    else if(len1==len2){
        for(i=0;i<len1;i++){
            if(S[i]>T[i]) cnt1++;
            if(S[i]<T[i]) cnt2++;
        }
        if(cnt1>cnt2)return 1;
        else if(cnt1==cnt2) return 0;
        else if(cnt1<cnt2) return -1;
    }
}
int main(){
    int t;
    char a[100],b[100];
    char *p,*q;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        p=a;q=b;
        cout<<str(p,q)<<endl;
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

