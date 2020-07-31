#include<iostream>
using namespace std;
//#include<fstream>
const int n=10;
int main(){
	//freopean("C:\\dev\\cin.txt","r",stdin);
	int t;
	cin>>t;
	int i,j;
	char *str1=new char[n];
	char *str2=new char[n];
	char *str3=new char[n];
	char str4[30];
	while(t--){
		for(i=0;i<n;i++)
			cin>>*(str1+i);
		for(i=0;i<n;i++)
			cin>>*(str2+i);
		for(i=0;i<n;i++)
			cin>>*(str3+i);
		int a1,b1,a2,b2,a3,b3,c1,c2,c3;
		cin>>a1>>b1;
		cin>>a2>>b2;
		cin>>a3>>b3;
		c1=b1-a1;
		c2=b2-a2;
		c3=b3-a3;
		for(i=0;i<=c1;i++)
			str4[i]=*(str1+a1-1+i);
		for(i=0;i<=c2;i++)
			str4[c1+i+1]=*(str2+a2-1+i);
		for(i=0;i<=c3;i++)
			str4[c1+c2+i+2]=*(str3+a3-1+i);
			for(i=0;i<c1+c2+c3+3;i++)
			cout<<str4[i];
		cout<<endl;
	}
	return 0;
}
