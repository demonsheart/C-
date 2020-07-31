#include<iostream>
#include<cstring>
using namespace std;
int Compare(char *S,char *T){
	int i;
	int len1=strlen(S);
	int len2=strlen(T);
	//int len;
	int count=0;
	if(len1>len2)
	return 1;
	else if(len1<len2)
	return -1;
	else{
	for(i=0;i<len1;i++){
		if(*(S+i)>*(T+i))
		count++;
	}
}
	if(count>len1/2)
	return 1;
	else if(count==len1/2)
	return 0;
	else 
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	char *str1=new char[30];
	char *str2=new char[30];
	cin>>str1;
	cin>>str2;
	cout<<Compare(str1,str2)<<endl;
	}
	return 0;
}
