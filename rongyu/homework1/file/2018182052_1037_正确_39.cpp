#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  //  freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
    int T=0;
    cin>>T;
    while(T--){
        char ch='\0';
        cin>>ch;
        int n=0;
        if(ch=='I'){
                cin>>n;
                int *p=new int[n];
                int sum=0;
                for(int i=0;i<n;++i){
                        cin>>p[i];
                        sum+=p[i];
                }
                cout<<(double)sum/n<<endl;
                delete []p;
        }
        else if(ch=='C'){
                cin>>n;
                char *p=new char[n];
                char maxx='A';
                for(int i=0;i<n;++i){
                        cin>>p[i];
                        if(p[i]>maxx)maxx=p[i];
                }
                cout<<maxx<<endl;
                delete[] p;
        }
        else if(ch=='F'){
                cin>>n;
                float *p=new float[n];
                float minn=0;
                cin>>p[0];minn=p[0];
                for(int i=1;i<n;++i){
                        cin>>p[i];
                        if(p[i]<minn)minn=p[i];
                }
                cout<<minn<<endl;
                delete []p;
        }
    }


    return 0;
}
