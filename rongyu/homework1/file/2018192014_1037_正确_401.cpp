#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        int n,i;
        cin>>ch>>n;
        switch(ch){
            case'C':{
                char *a=new char[n];
                for(i=0;i<n;i++)
                    cin>>*(a+i);
                ch=*a;
                for(i=1;i<n;i++)
                {
                    if(*(a+i)>ch)
                        ch=*(a+i);
                }
                cout<<ch<<endl;
                break;}
            case'I':{
                int *a=new int[n];
                for(i=0;i<n;i++)
                    cin>>*(a+i);
                int num=*a;
                for(i=1;i<n;i++)
                {
                    num=*(a+i)+num;
                }
                cout<<num/n<<endl;
                break;}
            case'F':{
                float *a=new float[n];
                for(i=0;i<n;i++)
                    cin>>*(a+i);
                float min=*a;
                for(i=1;i<n;i++)
                {
                    if(min>*(a+i))
                        min=*(a+i);
                }
                cout<<min<<endl;
                break;}
        }
    }
    return 0;
}

