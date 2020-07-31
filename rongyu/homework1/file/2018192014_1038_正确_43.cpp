#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        char *a=new char[11],*b=new char[11],*c=new char[11];
        int d,e,f,g,h,k,i,j=0,n;
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>k;
        n=e-d+g-f+k-h;
        char *res=new char[n];
        for(i=d-1;i<e;i++)
        {
            *(res+j)=*(a+i);
            j++;
        }
        for(i=f-1;i<g;i++)
        {
            *(res+j)=*(b+i);
            j++;
        }
        for(i=h-1;i<k;i++)
        {
            *(res+j)=*(c+i);
            j++;
        }
        cout<<res<<endl;
        delete []res;
    }
    return 0;
}

