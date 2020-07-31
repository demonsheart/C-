#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char * add(char * a,char * b);

int main() {
    char a[50],b[50];
    int t;

    cin>>t;

    while(t--) {
        cin.ignore(10,'\n');
        cin>>a;
        cin.ignore(10,'\n');
        cin>>b;

        cout<<a<<" "<<b<<" "<<add(a,b)<<endl;


    }


    return 0;
}

char * add(char * a,char * b) {
    static char s[100];

    strcpy(s,a);
    strcat(s,b);

    return s;
}

