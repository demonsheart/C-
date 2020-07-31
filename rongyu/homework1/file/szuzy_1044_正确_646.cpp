#include <iostream>
using namespace std;
int main()
{ 
   int t,m,n,i,j;
   int min,max;
   cin>>t;
   while(t--)
   {
   	  cin>>m>>n;
   	  int **a=new int *[m];
   	  for(i=0;i<m;i++)
   	    a[i]=new int[n];
   	  for(i=0;i<m;i++)
   	   for(j=0;j<n;j++)
   	     cin>>*(*(a+i)+j);
   	  //min=*(*(a+0)+0);max=*(*(a+0)+0);
   	  min=max=*(*(a+0)+0);
   	  for(i=0;i<m;i++)
   	   for(j=0;j<n;j++)
   	   {
   	   	if(min>*(*(a+i)+j)) 
   	   	  min=*(*(a+i)+j);
   	   	if(max<*(*(a+i)+j))
   	   	  max=*(*(a+i)+j);
	   }
		cout<<min<<" "<<max<<endl;	
		for(i=0;i<m;i++)
		  delete []a[i];
		delete []a;
   }
}
