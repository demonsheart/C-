#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int t;
    char s1[15],s2[15],s3[15];
    char * str;
    int a,b,c,d,e,f;
    int i;
    char *tmp;



    cin>>t;
    //cin.ignore(10,'\n');
    while(t--) {
        cin.ignore(10,'\n');
        cin.getline(s1,sizeof(s1),'\n');
        cin.getline(s2,sizeof(s2),'\n');
        cin.getline(s3,sizeof(s3),'\n');

        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;

        str = new char[b-a+d-c+f-e+10];
        tmp = str;

        for(i = 0;i<b-a+1;i++) {
            *(str) = *(s1+a-1+i);
           // cout<<s1<<endl;
            str++;
        }

        for(i = 0;i<d-c+1;i++) {
            *(str) = *(s2+c-1+i);
             //cout<<*str<<endl;
            str++;
        }

        for(i = 0;i<f-e+1;i++) {
            *(str) = *(s3+e-1+i);
             //cout<<*str<<endl;
            str++;
        }

        *(str) = 0;
        str = tmp;
        cout<<str<<endl;


        delete []str;

    }



    return 0;
}

