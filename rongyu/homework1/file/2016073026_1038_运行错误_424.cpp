#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore(100,'\n');
    while(t--){
        char str[3][100];\
        int ar[3][2];
        int len=0;
        for(int i=0;i<3;i++)
            cin>>str[i];
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++)
                cin>>ar[i][j];
            len+= ar[i][1]-ar[i][0]+1;
        }
        char *p=new char[len+1];
        *(p+len)='\0';
        for(int i=0;i<3;i++){
            for(char *q=str[i]+ar[i][0]-1; p<str[i]+ar[i][1]-1; q++)
                *p++=*q;
        }
        p=p-len;
        cout<<p<<endl;
    }
    return 0;
}

