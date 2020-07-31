#include <iostream>
#include <fstream>
using namespace std;
void Operate(){
	string str1, str2, str3;
	int a1, a2, b1, b2, c1, c2, length, index = 0;
	cin>>str1>>str2>>str3;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	a1 --; b1 --; c1 --;
	length = a2 + b2 + c2 - a1 - b1 - c1;
	char *str = new char[length], *temp;
	temp = &str1[0];
	for(int i=a1;i<a2;i++){
		*(str+index) = *(temp+i);
		index ++;
	}
	temp = &str2[0];
	for(int i=b1;i<b2;i++){
		*(str+index) = *(temp+i);
		index ++;
	}
	temp = &str3[0];
	for(int i=c1;i<c2;i++){
		*(str+index) = *(temp+i);
		index ++;
	}
	for(int i=0;i<length;i++){
		cout<<*(str+i);
	}
	cout<<endl;
}
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t --){
		Operate();
	}
}
