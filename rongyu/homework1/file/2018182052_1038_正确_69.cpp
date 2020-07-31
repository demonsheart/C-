#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int T=0;
    cin>>T;
    char s1[1000];
    char s2[1000];
    char s3[1000];
    int c1[2],c2[2],c3[2];
    while(T--){
        cin>>s1>>s2>>s3;
        cin>>c1[0]>>c1[1]>>c2[0]>>c2[1]>>c3[0]>>c3[1];
        int n=(c1[1]-c1[0]+1)+(c2[1]-c2[0]+1)+(c3[1]-c3[0]+1);
        char *p=new char[n+1];
        int cur=0;
        for(int i=c1[0]-1;i<c1[1];++i){
            p[cur++]=s1[i];
        }
        for(int i=c2[0]-1;i<c2[1];++i){
            p[cur++]=s2[i];
        }
        for(int i=c3[0]-1;i<c3[1];++i){
            p[cur++]=s3[i];
        }
        p[cur]='\0';
        cout<<p<<endl;
    }
    return 0;
}
