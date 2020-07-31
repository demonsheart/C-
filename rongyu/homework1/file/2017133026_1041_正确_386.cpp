#include <iostream>

using namespace std;

int main()
{
    int t;
    char* a="January";
    char* b="February";
    char* c="March";
    char* d="April";
    char* e="May";
    char* f="June";
    char* g="July";
    char* h="August";
    char* i="September";
    char* j="October";
    char* k="November";
    char* l="December";
    char* month[12]={a,b,c,d,e,f,g,h,i,j,k,l};
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a>=1 && a<=12){
            cout<<*(month+a-1)<<endl;
        }else{
            cout<<"error"<<endl;
        }

    }
    return 0;
}

