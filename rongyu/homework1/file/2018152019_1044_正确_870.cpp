#include <iostream>
using namespace std;
int main()
{
 int times;
  cin>>times;
 while(times--)
  {
    int m,n,i,j;
     cin>>m;
     cin>>n;
    int **p=NULL;
     p=new int *[m];
    for(i=0;i<m;i++)
    {
     p[i]=new int [n];
    }
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          cin>>p[i][j];


    int _min=p[0][0],_max=p[0][0];
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
        if(_min>p[i][j])
          _min=p[i][j];
        if(_max<p[i][j])
          _max=p[i][j];
       }
    }
    cout<<_min<<" "<<_max<<endl;
  }
 return 0;
}
