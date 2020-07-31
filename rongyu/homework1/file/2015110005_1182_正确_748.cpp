#include<iostream>
using namespace std;
char str[100];
char *strAdd(char *s1, char *s2){
	int i = 0, j = 0;
	char ch;
	while((ch = *(s1 + i)) != 0) *(str + i++) = ch;
	while((ch = *(s2 + j++)) != 0) *(str + i++) = ch;
	*(str + i) = 0;
	return str; 
}
int main(){
	int t;
	char str1[50], str2[50];
	cin >> t;
	while(t--){
		cin >> str1 >> str2;
		cout << str1 << " " << str2 << " ";
		cout << strAdd(str1, str2) << endl;
	}
	return 0;
}
