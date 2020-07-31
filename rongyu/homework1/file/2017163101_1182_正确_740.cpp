#include<iostream>
#include<cstring>
using namespace std;
void *strAdd(char *s1, char *s2){
	char *str3=new char[30];
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i;
	for(i=0;i<len1;i++){
		str3[i]=*(s1+i);
		cout<<str3[i];
	}
	for(i=0;i<len2;i++){
		str3[len1+1+i]=*(s2+i);
		cout<<str3[len1+1+i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char *str1=new char[30];
		char *str2=new char[30];
		char *str3=new char[30];
		cin>>str1;
		cin>>str2;
		cout<<str1<<" "<<str2<<" ";
		strAdd(str1,str2);
		cout<<endl;
	}
	return 0;
}
