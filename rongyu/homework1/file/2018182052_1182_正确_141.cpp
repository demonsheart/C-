#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char* strAdd(char s1[],char s2[]){
    int n1=strlen(s1);
    int n2=strlen(s2);
    char *s3=new char[n1+n2+1];
    int cur=0;
    for(int i=0;i<n1;++i){
            s3[cur++]=s1[i];
    }
    for(int i=0;i<n2;++i){
            s3[cur++]=s2[i];
    }
    s3[cur]='\0';
    return s3;
}

int main(){
    int T=0;
    cin>>T;
    char s1[1000];
    char s2[1000];
    while(T--){
        cin>>s1>>s2;
        char *s3=strAdd(s1,s2);
        cout<<s1<<" "<<s2<<" "<<s3<<endl;
        delete []s3;
    }
    return 0;
}
