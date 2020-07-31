#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int Compare(const char *s, const char *t){
	if(strlen(s) > strlen(t)){
		return 1;
	}
	else if(strlen(s) < strlen(t)){
		return -1;
	}
	else{
		int index = 0, larger = 0, small = 0;
		while(index < strlen(s)){
			if(*(s+index) > *(t+index)){
				larger ++;
			}
			else if(*(s+index) < *(t+index)){
				small ++;
			}
			index ++;
		}
		if(larger == small){
			return 0;
		}
		else if(larger > small){
			return 1;
		}
		else{
			return -1;
		}
	}
}
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t --){
		string str1, str2;
		cin>>str1>>str2;
		cout<<Compare(str1.data(), str2.data())<<endl;
	}
}
