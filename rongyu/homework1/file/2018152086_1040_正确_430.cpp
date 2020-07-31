#include<iostream>
using namespace std;

int isNumber(char* p){
	int i,j,num=0;
	int *a=new int [10];
	for(i=0;i<10;i++){
		if(*(p+i)>='0'&&*(p+i)<='9'){
			*(a+i)=*(p+i)-'0';
		}
		else if(*(p+i)=='\0'){
			break;
		}
		else return -1;
	}
	for(j=0;j<i;j++){
		num=*(a+j)+num*10;
	}
	return num;
}

int main(){
	int t,num;
	cin>>t;
	while(t--){
		char *p=new char [1000];
		cin>>p;
		num=isNumber(p);
		cout<<num<<endl;
	}
	return 0;
}
