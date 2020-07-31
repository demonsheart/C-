#include <iostream>
#include <string>
using namespace std;
char *strAdd(char *s1,char *s2){
    char *p = s1;
    while(*s1++);
    s1--;
    while(*s1++ = *s2++);
        return p;
}

int main()
{
    int time;
    cin>>time;
    for(int i =0;i<time;i++){
      char s1[100]={'\0'},s2[100]{'\0'};
      cin>>s1;
      cin>>s2;
      cout<<strAdd(s1,s2)<<endl;
    }
    return 0;
}

