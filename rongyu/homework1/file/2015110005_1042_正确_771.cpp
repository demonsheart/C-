#include<iostream>
using namespace std;

int compare(char* s, char* t){
	int i, c1 = 0, c2 = 0, len1 = 0, len2 = 0;
	char ch;
	while((ch = *(s + len1++)) != 0) ;
	while((ch = *(t + len2++)) != 0) ;
	if(len1 > len2) return 1;
	if(len1 < len2) return -1;
	for(i = 0; i < len1; i++){
		if(*(s + i) > *(t + i)) c1++;
		else if(*(s + i) < *(t + i)) c2++;
	}
	if(c1 > c2) return 1;
	if(c1 < c2) return -1;
	return 0;
}
int main(){
	int t;
	char str1[50], str2[50];
	cin >> t;
	while(t--){
		cin >> str1 >> str2;
		cout << compare(str1, str2) << endl;
	}
	return 0;
}
