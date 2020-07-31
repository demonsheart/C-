#include<iostream> 
#include<cstring>
using namespace std;
long isNumber (char *p)
{
long n=0;
int flag=1;
while(*p!='\0')
{
	if(*p>'9'||*p<'0')
	return -1;
    n=n*10+(*p-'0');
    p++;
}
if(*p=='-') 
{
	p++;
	flag=-1;
	}
	else 
	p++;
return n*flag;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		char *str=new char[30];
		cin>>str;
		cout<<isNumber(str)<<endl; 
	}
	return 0;
}
