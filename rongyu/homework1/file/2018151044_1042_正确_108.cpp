#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int cmp(char *s,char *t){
    int slen=strlen(s),tlen=strlen(t);
    if(slen>tlen)return 1;
    else if(slen<tlen)return -1;
    else{
        int sb=0,tb=0;
        for(int i=0;i<slen;i++)
            if(s[i]>t[i])
                sb++;
            else if(s[i]<t[i])
                tb++;
        if(sb>tb)return 1;
        else if(sb<tb)return -1;
        else return 0;
    }
}
int main(){
    int tt;
    cin>>tt;
    cin.ignore(10,'\n');
    while(tt--){
        char a[100],b[100];
        cin.getline(a,100);
        cin.getline(b,100);
        cout<<cmp(a,b)<<endl;
    }
}

