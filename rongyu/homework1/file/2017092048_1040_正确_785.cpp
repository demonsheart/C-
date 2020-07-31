// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 
#include <iostream>

#define MAX 100

using namespace std;

int isNumber(char *p) {
	int num = 0;
	for (int i = 0; *(p + i) != '\0'; i++) {
		char c = *(p + i);
		if (c > '9' || c < '0') {
			return -1;
		}
		else {
			num = num * 10 + c - '0';
		}
	}
	return num;
}

int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		char str[MAX];
		char *s = str;

		cin >> str;
		cout << isNumber(s) << endl;
	}

	return 0;
}

