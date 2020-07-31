#include <iostream>
#include<cstring>
using namespace std;
char *strAdd(char*str1,char *str2)
{

    char *str = new char[strlen(str1)+strlen(str2)];
    for(int i=0; i<strlen(str1); i++)
        str[i] =str1[i];
     for(int j=0; j<strlen(str2); j++)
        str[strlen(str1)+j] =str2[j];
        return str;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        char *str1 = new char [20];
        char *str2 = new char [20];
        cin>>str1>>str2;
        cout<<str1<<" "<<str2<<" "<<strAdd(str1,str2)<<endl;

    }
    return 0;
}

