#include <iostream>
#include <iomanip>
#include <cstring>
#include <memory>
#include <cstring>
using namespace std;

char *strAdd(char *s1, char *s2){
    int len1,len2,i;
    char *p=NULL;
    len1=strlen(s1);len2=strlen(s2);
    p=new char[len1+len2+3];
    for(i=0;i<len1+1;i++){
        p[i]=s1[i];
    }
    for(i=0;i<len2+1;i++){
        p[len1+i]=s2[i];
    }
    p[len1+len2+2]='\0';
    return p;
}
int main()
{
    int t,i,j,k;
    char *p1,*p2;
    char a[100],b[100];
    cin>>t;
    cin.ignore(1000,'\n');
    while(t--){
        memset(a,'0',sizeof(a));
        memset(b,'0',sizeof(b));
        cin>>a;
        cin.ignore(1000,'\n');
        cin>>b;
        cin.ignore(1000,'\n');
        p1=a;
        p2=b;
        cout<<p1<<' '<<p2<<' '<<strAdd(p1,p2)<<endl;
    }

    //cin.get();cin.get();
    return 0;
}
