#include<iostream>
#include<cstring>
using namespace std;
void compare(char *str1,char *str2){
	int t1=0;
	int t2=0;
	int n1=strlen(str1);
	int n2=strlen(str2);
    if(n1>n2)
    cout<<"1"<<endl;
    if(n1<n2)
    cout<<"-1"<<endl;
    if(n1==n2){
	for(int i=0;i<n1;i++){
		if(*(str1+i)>*(str2+i))
		t1++;
		if(*(str1+i)<*(str2+i))
		t2++;
	}
	if(t1>t2)
	cout<<"1"<<endl;
	else if(t1<t2)
	cout<<"-1"<<endl;
	else if(t1==t2)
	cout<<"0"<<endl;
}
	
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	char str1[20],str2[20];
	cin>>str1;
	cin>>str2;
	char *st1,*st2;
	st1=str1;
	st2=str2;
	compare(st1,st2);
	}
	return 0;	
}
