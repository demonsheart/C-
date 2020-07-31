#include<iostream>
using namespace std;
void find(int *num,int n,int &minIndex,int &maxIndex);
int main()
{
int t,n,max,min;
    cin>>t;
    while (t--)
    {
        cin>>n;
    int *p = new int[n];
        for(int i=0; i<n; ++i)
         cin>>*(p+i);
        find(p,n,min,max);
        cout<<"min="<<p[min]<<" minindex="<<min<<endl;
        cout<<"max="<<p[max]<<" maxindex="<<max<<endl;
        cout<<endl;
        delete [] p;
    }
    
}
void find(int *num,int n,int &minIndex,int &maxIndex)
{
int i;
    minIndex = maxIndex = 0;
    for(i=0; i<n; ++i)
    {
        if(num[i]>num[maxIndex])
         maxIndex = i;
        if(num[i]<num[minIndex])
         minIndex = i;
    }
}