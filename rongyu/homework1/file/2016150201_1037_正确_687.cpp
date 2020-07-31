#include<iostream>
using namespace std;
int num(int *a,int n){
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=*(a+i);
	return sum/n;	
} 

char zifu(char *ch,int n){
	char tr;
	tr=*ch;
	for(int i=0;i<n;i++){
		
		if(tr<*(ch+i))
		tr=*(ch+i);
	}
	
	return tr;
}

float fnum(float *f,int n){
	float t;
	t=*f;
	for(int i=0;i<n;i++){
		
		if(t>*(f+i))
		t=*(f+i);
	}
	
	return t;
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	char c;
	cin>>c;
	if(c=='I'){
		int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++)
		cin>>*(a+i);
		cout<<num(a,n)<<endl;
	}
	if(c=='C'){
		int n;
		cin>>n;
		char *a=new char[n];
		for(int i=0;i<n;i++)
		cin>>*(a+i);
		cout<<zifu(a,n)<<endl;
	}
	if(c=='F'){
		int n;
		cin>>n;
		float *a=new float[n];
		for(int i=0;i<n;i++)
		cin>>*(a+i);
		cout<<(float)fnum(a,n)<<endl;
	}}
}


zj07:Problem1038:ÕýÈ·
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	char *array;
	while(t--)
	{
		char str1[11],str2[11],str3[11];
		cin>>str1>>str2>>str3;
		
		char *p1=str1,*p2=str2,*p3=str3;
		
		int a1,b1,a2,b2,a3,b3;
		cin>>a1>>b1>>a2>>b2>>a3>>b3;
		
		int len;
		len=(b1-a1)+(b2-a2)+(b3-a3)+3;
		
		
		array=new char(len);
		
        int index=0;
		
		for(int i=a1-1;i<b1;i++)
		{
			*(array+index)=*(p1+i);
			index++;
		}
		
		for(int i=a2-1;i<b2;i++)
		{
			*(array+index)=*(p2+i);
			index++;
		}
	
		for(int i=a3-1;i<b3;i++)
		{
			*(array+index)=*(p3+i);
			index++;
		}
		
		for(int i=0;i<len;i++)
		{
			cout<<*array;
			array++;
		}
		cout<<endl;
		
		delete [](array-len);
	
	}	
	return 0;
}
