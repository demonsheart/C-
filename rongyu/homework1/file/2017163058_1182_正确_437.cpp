#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
char *strAdd(const char *s1, const char *s2){
	char *result = new char[strlen(s1) + strlen(s2) +1];
	result[0] = '\0';
	strcpy(result, s1);
	strcat(result, s2);
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
		char *str = strAdd(str1.c_str(), str2.c_str());
		cout<<str<<endl;
		delete []str;
	}
}
