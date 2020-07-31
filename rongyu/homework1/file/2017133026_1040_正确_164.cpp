#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    int isNumber(char*);
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<isNumber(&s[0])<<endl;
    }
    return 0;
}
int isNumber(char *s){
    int i=0;
    while(1){
        if(*(s+i)=='\0'){
            break;
        }
        if(*(s+i)>'9' || *(s+i)<'0'){
            return -1;
        }
        i++;
    }
    int num=0;
    int j=0;
    i--;
    while(1){
        num+=ceil((*(s+j)-'0')*pow(10,i));
        if(i==0){
            return num;
        }
        i--;
        j++;
    }
    return 0;
}

