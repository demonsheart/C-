#include<iostream>
using namespace std;
void does(int n,int **p);
int main()
{
int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
    int **a = new int*[n];
        for(int i=0; i<n; ++i)
         a[i] = new int[n];
        does(n,a);
        for(int i=0,j=0; i<n; ++i)
        {
            for(j=0; j<n-1; ++j)
            cout<<a[i][j]<<" ";
            cout<<a[i][j]<<endl;
        }
        cout<<endl;
        for(int i = 0; i < n ;++i)
	    {
            delete [] a[i];
	    }
 
        delete [] a;
    }  
}
void does(int n,int **p)
{
int k=1, k1=n-1, k2=n-1, i=0, j=0, k0=0;
    for(int i=0; i<n; ++i)
     for(int j=0; j<n; ++j)
      p[i][j] = 0;
      if(n==1)
      p[i][j] = 1;
      else
      {
          while (p[i][j]==0)
            {
                i=k0;

                while (j<=k1)//向右前进
                {
                    p[i][j] = k;
                    k++;
                    j++;
                }
                j--;
                i++;
                if(p[i][j]!=0)
                break;
                while (i<=k2)//向下前进
                {
                    p[i][j] = k;
                    k++;
                    i++;
                }
                i--;
                j--;
                k1--;
                if(p[i][j]!=0)
                break;
                while (j>=k0)//向左前进
                {
                    p[i][j] = k;
                    k++;
                    j--;
                }
                j++;
                i--;
                k2--;
                k0++;
                if(p[i][j]!=0)
                break;
                while (i>=k0)//向上前进
                {
                    p[i][j] = k;
                    k++;
                    i--;
                }
                i++;
                j++;
                if(p[i][j]!=0)
                break;
            }
      }   
}