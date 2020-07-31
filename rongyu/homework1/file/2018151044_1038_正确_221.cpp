#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        char s1[20],s2[20],s3[20];
        cin>>s1>>s2>>s3;
        int idx[3][2];
        for(int i=0;i<3;i++)
            for(int j=0;j<2;j++)
                cin>>idx[i][j];
        int len=0,cnt=0;
        for(int i=0;i<3;i++)
            len+=idx[i][1]-idx[i][0]+1;
        char *p=new char [len+1];
        for(;idx[0][0]<=idx[0][1];idx[0][0]++)
            *(p + cnt++)=*(s1+idx[0][0]-1);
        for(;idx[1][0]<=idx[1][1];idx[1][0]++)
            *(p + cnt++)=*(s2+idx[1][0]-1);
        for(;idx[2][0]<=idx[2][1];idx[2][0]++)
            *(p + cnt++)=*(s3+idx[2][0]-1);
        *(p+len+1)=0;
        cout<<p<<endl;
    }
}

