#include <iostream>
using namespace std;
int main()
{
    int times;
    cin>>times;
    while(times--)
    {
     char ch;
     int n,i;

     cin>>ch>>n;
     if(ch=='I')
     {
      int *t;
       t=new int[n];
       for(i=0;i<n;i++)
      {
      cin>>t[i];
      }
      int sum=0,mean;
      for(i=0;i<n;i++)
      {
       sum+=t[i];
      }
      mean=sum/n;
      cout<<mean<<endl;
      delete []t;
     }
      
      
      
      
  else if(ch=='C')
  {
  char *p;
      if((p=new char[n])!=NULL)
      {
      for(i=0;i<n;i++)
      cin>>p[i];
      }
      char _max=*p;
      for(i=0;i<n;i++)
      {
       if(_max<*(p+i))
       _max=*(p+i);
      }
       cout<<_max<<endl;
       delete []p;
  }
  
  
  
  
  else if(ch=='F')
  {
  double *pt;
  pt=new double[n];
  for(i=0;i<n;i++)
  {
  cin>>pt[i];
  }
  double _min=*pt;
  for(i=0;i<n;i++)
  {
  if(_min>pt[i])
  _min=pt[i];
  }
  cout<<_min<<endl;
  delete []pt;
  }
  }
  return 0;
}
