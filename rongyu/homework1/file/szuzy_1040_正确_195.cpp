#include <iostream> 
#include <cstdio> 
#include <cmath> 
#include <string> 
#include <cstring> 
using namespace std; 
  
int isNumber(char *p) 
{ 
    int sum=0,flag=1; 
    int l=strlen(p); 
    
    for (int i=0;i<l;i++) 
    { 
        if(*(p+i)<='9'&&*(p+i)>='0') 
            sum=sum*10+(*(p+i)-'0');
		else if (*p=='-') 
			flag=0; 
        else 
			return -1; 
    } 
    if (!flag) 
		sum=-sum; 
    return sum; 
} 
  
int main() 
{ 
    int t; 
    cin >> t; 
    cin.ignore(100,'\n'); 
    	
    char s[1000]; 
    while (t--) 
    { 
        cin>>s;
		//int l=strlen(s); 
        cout << isNumber(s) << endl; 
    } 
    return 0; 
} 
  

