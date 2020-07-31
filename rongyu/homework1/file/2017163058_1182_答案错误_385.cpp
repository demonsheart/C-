#include <iostream>
#include <fstream>
using namespace std;
char *strAdd(char *s1, char *s2){
	int length1 = 0, length2 = 0, length = 0;
	char temp = s1[length1];
	while(temp != '\0'){
		temp = s1[++length1];
	}
	temp = s2[length2];
	while(temp != '\0'){
		temp = s2[++length2];
	}
	length = length1 + length2 + 1;
	char *result = new char[length];
	for(int i=0;i<length1;i++){
		result[i] = s1[i];
	}
	for(int i=length1;i<length1+length2;i++){
		result[i] = s2[i-length1];
	}
	result[length] = '\0';
	return result;
}
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t --){
		string str1, str2;
		cin>>str1>>str2;
		cout<<str1<<" "<<str2<<" ";
		int index = 0;
		char *str = strAdd(&str1[0], &str2[0]);
		char temp = str[index];
		while(temp != '\0'){
			cout<<temp;
			temp = str[++index];
		}
		delete []str;
		cout<<endl;
	}
}
