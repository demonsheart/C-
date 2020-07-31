#include<iostream>
#include<string.h>
using namespace std;
int main()
  {
      int t;
      cin>>t;
      while(t--)
        {
          char a[1000];
          char b[1000];
          char *S=a;
          char *T=b;
          int l1,l2,i;
          int x=0,y=0;
          cin>>a>>b;
          l1=strlen(a);
          l2=strlen(b);
         if(l1>l2)
          cout<<"1"<<endl;
         else if(l1<l2)
          cout<<"-1"<<endl;
         else
		  {
          for(i=0;i<l1;i++)
		  {
               if(*(S+i)>*(T+i))
                x++;
               if(*(S+i)<*(T+i))
                y++;
		  }
          if(x==y)
          cout<<"0"<<endl;
          if(x>y)
          cout<<"1"<<endl;
          if(x<y)
          cout<<"-1"<<endl;
		 }
	  }
      return 0;
 }

