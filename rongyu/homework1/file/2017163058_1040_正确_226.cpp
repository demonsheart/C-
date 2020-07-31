#include <iostream>
#include <fstream>
using namespace std;
int isNumber(char *str){
	int result = 0, index = 0;
	char temp = str[index];
	while(temp != '\0'){
		if(temp >= '0' && temp <= '9'){
			result = result * 10 + temp - '0';
		}
		else{
			return -1;
		}
		temp = str[++index];
	}
	return result;
}
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t --){
		string str;
		cin>>str;
		cout<<isNumber(&str[0])<<endl;
	}
}
