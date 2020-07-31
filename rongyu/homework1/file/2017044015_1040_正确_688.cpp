#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int isNumber(char* s);
int main()
{
	int t;
	char* s;
	cin>>t;
	while(t-- > 0){
        s = new char[60];
        cin>>s;
        cout<<isNumber(s)<<endl;
	}
	return 0;
}

int isNumber(char* s){
    int t=0, num=0;
    for(int i=0; *(s+i)!= '\0'; i++, t++){
        if(*(s+i) < '0' || *(s+i) > '9')
            return -1;
    }
    for(int i=0 ; i < t; i++){
        num += (*(s+i) - '0') * pow(10,t-1-i) ;
    }
    return num;
}

