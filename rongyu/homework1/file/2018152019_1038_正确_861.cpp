#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 int times;
 cin>>times;
  while(times--)
  {
    char ch1[100],ch2[100],ch3[100];
    char s1[100],s2[100],s3[100];
      cin>>ch1>>ch2>>ch3;
    int a1,a2,a3,b1,b2,b3,n1,n2,n3,i,j;
      cin>>a1>>b1>>a2>>b2>>a3>>b3;
      n1=b1-a1+1;
      n2=b2-a2+1;
      n3=b3-a3+1;

    for(i=a1-1,j=0;i<b1;i++,j++)
      s1[j]=ch1[i];
      s1[j]='\0';
    for(i=a2-1,j=0;i<b2;i++,j++)
      s2[j]=ch2[i];
      s2[j]='\0';
    for(i=a3-1,j=0;i<b3;i++,j++)
      s3[j]=ch3[i];
      s3[j]='\0';
    char *p1,*p2,*p3;
      p1=new char[n1+1];
      p1=&s1[0];
      p2=new char[n2+1];
      p2=&s2[0];
      p3=new char[n3+1];
      p3=&s3[0];
    strcat(p1,p2);
    strcat(p1,p3);
    cout<<p1<<endl;
  }
 return 0;
}
