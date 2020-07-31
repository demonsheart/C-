#include<iostream>
//#include<stdlib.h>
using namespace std;
void does(int *p,int *q, const int n1, const int n2);
int main()
{
int t,p[2][3],q[3][2];
const int n1 = 3;
const int n2 = 2;
    cin>>t;
    while (t--)
    {
        for(int i=0; i<2; ++i)
         for(int j=0; j<3; ++j)
          cin>>p[i][j];
        does(&p[0][0],&q[0][0],n1,n2);
        for(int i=0; i<3; ++i)
        {
            for(int j=0; j<2; ++j)
            cout<<q[i][j]<<" ";
            cout<<endl;
        }
         
    }
//    system("pause");
}
void does(int *p,int *q, const int n1, const int n2)
{
    for(int i=0; i<2; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            *(q+(2-j)*n2+i) = *(p+i*n1+j);
        }
    }
}
