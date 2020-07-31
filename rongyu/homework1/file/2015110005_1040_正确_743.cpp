#include<iostream>
using namespace std;

int isNumber(char str[]){
	int i, sum = 0;
	char ch;
	for(i = 0; (ch = str[i]) != '\0'; i++){
		if(!(ch >= '0' && ch <= '9')) return -1;
		sum = 10 * sum + ch - '0';
	}
	return sum;
}

int main(){
	int t;
	char str[10];
	cin >> t;
	while(t--){
		cin >> str;
		cout << isNumber(str) << endl;
	}
	return 0;
}
