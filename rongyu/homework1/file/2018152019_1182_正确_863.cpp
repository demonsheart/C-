#include <iostream>
#include <string.h>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
 int times;
 cin>>times;
 while(times--)
 {
  char s1[100];
  char s2[100];
    cin>>s1>>s2;
  char *p1=s1;
  char *p2=s2;
    cout<<p1;
  char *str=strAdd(p1,p2);
    cout<<" "<<p2<<" "<<str<<endl;
 }
 return 0;
}
char *strAdd(char *s1, char *s2)
{
  char *p3;
    p3=strcat(s1,s2);
  return p3;
}
