#include<iostream>
using namespace std;
void does(int *x1, int *x2,int m, int n, int **p);
int main()
{
int t,m,n,min,max;
    cin>>t;
    while (t--)
    {
        cin>>m>>n;
    int **a = new int*[m];
        for(int i=0; i<m; ++i)
         a[i] = new int[n];
        for(int i=0; i<m; ++i)
         for(int j=0 ;j<n; ++j)
          cin>>a[i][j];
        does(&max,&min,m,n,a);
        cout<<min<<" "<<max<<endl;
        for(int i = 0; i < m ;++i)
	{
		delete [] a[i];
	}
 
	delete [] a;
    }
    
}
void does(int *x1, int *x2,int m, int n, int **p)
{
int i,j;
    *x1 = p[0][0];
    for(i=0; i<m; ++i)
    {
        for(j=0 ;j<n; ++j)
        {
            if(*x1<p[i][j])
             *x1 = p[i][j];
        }
    }
    *x2 = p[0][0];
    for(i=0; i<m; ++i)
    {
        for(j=0 ;j<n; ++j)
        {
            if(*x2>p[i][j])
             *x2 = p[i][j];
        }
    }
}