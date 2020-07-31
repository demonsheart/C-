#include<iostream>
using namespace std;
int main(){
	int t,i;
	int a1,a2,b1,b2,c1,c2;
	cin>>t;
	while(t--){
		char *a=new char [10];
		char *b=new char [10];
		char *c=new char [10];
		for(i=0;i<10;i++){
			cin>>*(a+i);
		}
		for(i=0;i<10;i++){
			cin>>*(b+i);
		}
		for(i=0;i<10;i++){
			cin>>*(c+i);
		}
		cin>>a1>>a2>>b1>>b2>>c1>>c2;
		for(i=a1-1;i<a2;i++){
			cout<<*(a+i);
		}
		for(i=b1-1;i<b2;i++){
			cout<<*(b+i);
		}
		for(i=c1-1;i<c2;i++){
			cout<<*(c+i);
		}
		cout<<endl;
	}
	return 0;
}
