#include <iostream>
#include <cstring>
using namespace std;

int compare (char *str1,char *str2)
{
    char *p1 =str1;
    char *p2 =str2;
    int sum1=0, sum2=0;
    if(strlen(str1)<strlen(str2))
        return -1;
    else if(strlen(str1)>strlen(str2))
        return 1;
    else for(; p1<str1+strlen(str1); p1++,p2++){
        if(*p1>*p2)
            sum1++;
        else sum2++;
    }
    if(sum1>sum2)
        return 1;
    else if(sum1<sum2)
        return -1;
        else return 0;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
    char *str1 = new char [1000];
    char *str2 = new char [1000];
    cin>>str1>>str2;
    cout<<compare(str1,str2)<<endl;
   }
   return 0;
}


