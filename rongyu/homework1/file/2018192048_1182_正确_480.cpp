#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;

void strAdd(char *s1, char *s2);

int main(){
	int t;
	char str1[100],str2[100],*s1,*s2;
	cin>>t;
	while(t--){
		cin>>str1>>str2;
		s1=str1,s2=str2;
		cout<<s1<<' '<<s2<<' ';
		strAdd(s1,s2);
	}
	return 0;
}

void strAdd(char *s1, char *s2){
	char *p;
	int lon1,lon2,i,j,lon;
	lon1=strlen(s1);
	lon2=strlen(s2);
	lon=lon1+lon2;
	
	p=(char*)malloc(lon*sizeof(char));
	for(i=0;i<lon1;i++)
		p[i]=s1[i];
	for(j=0;j<lon2;j++,i++)
		p[i]=s2[j];
	
	for(i=0;i<lon;i++)
		cout<<p[i];
	cout<<endl;
}
