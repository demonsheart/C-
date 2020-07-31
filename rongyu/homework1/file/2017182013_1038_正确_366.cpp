#include <iostream>
#include<cstring>
using namespace std;
void cut(char str[], int b, int e)
{
    int length = e-b+1;
    char *p = new char[length];
    for(int i=0; i<length; i++){
        p[i] = str[i+b-1];
    }
    cout<<p;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        char str1[11],str2[11],str3[11];
        cin>>str1;
        cin>>str2;
        cin>>str3;
        int begin1, begin2, begin3;
        int ending1, ending2, ending3;
        cin>>begin1>>ending1>>begin2>>ending2>>begin3>>ending3;
        cut(str1,begin1,ending1);
        cut(str2,begin2,ending2);
        cut(str3,begin3,ending3);
        cout<<endl;
    }
    return 0;
}

