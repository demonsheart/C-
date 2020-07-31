#include <iostream>
#include<cstring>
using namespace std;
int isNumber(char *str)
{
    int sum = 0;
    for(int i=0; i<strlen(str); i++){
            
        if(str[i]<'0' || str[i]>'9')
           return -1;
        else sum=sum*10+str[i]-'0';
    }
        return sum;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        char *str = new char[5];
        cin>>str;

        cout<<isNumber(str)<<endl;

    }
    return 0;
}

