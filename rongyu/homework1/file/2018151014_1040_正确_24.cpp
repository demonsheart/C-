#include <iostream>

using namespace std;

int isNumber(char *str);

int main(void) {
	
	int t;
	
	cin >> t;
	while (t--) {
		char str[64];
		
		cin >> str;
		
		if (isNumber(str)) {
			int i;
			for (i = 0; str[i] != '\0'; i++) {
				if (str[i] != '0') {
					break;
				}
			}
			for (; str[i] != '\0'; i++) {
				cout << str[i];
			}
			cout << '\n';
		}
		else {
			cout << "-1\n";
		}
	}
	
	return 0;
}

int isNumber(char *str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < '0' || str[i] > '9') {
			return 0;
		}
	}
	return 1;
}
