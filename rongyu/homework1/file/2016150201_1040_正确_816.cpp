#include<iostream>
#include<cstring> 
using namespace std;
int isnumber(char *a);
int main() { 
int l,k=0,t; char a[20];
char *p;
p=a; 
cin>>t;
while(t--) { 
cin>>a; 
cout<<isnumber(p)<<endl; 
} 
}
int isnumber(char *a) 
{
int i,j,l,m=0;
 l=strlen(a);
for(i=0;i<l;i++) { 
if(isdigit(a[i]))
m=m*10+a[i]-'0'; 
else return -1; 
} 
return m; 
}
