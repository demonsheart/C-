#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char *strAdd(char *s1,char *s2){
    int length,arraysize=200;
    char *p=new char[arraysize];
    p=s1;
    while(*s1++);
    s1--;
    while(*s1++=*s2++);

    return p;
}

int main(){
    int t;
    char s1[100],s2[100];
    cin>>t;
    while(t--){
        cin>>s1;
        cin>>s2;
        cout<<s1<<" "<<s2<<" ";
        cout<<strAdd(s1,s2)<<endl;
    }
    return 0;
}

