// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 

#include <iostream>
#include <stdio.h>
#define MAX 10

using namespace std;

int main() {
	// ini
	char *month[12];
	char m[12][MAX] = {
		"January",
		"February",
		" March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	for (int i = 0; i < 12; i++) {
		month[i] = m[i];
	}

	int samples = 0;
	cin >> samples;
	while (samples--) {
		int a = 0;
		cin >> a;
		if (a < 1 || a > 12) {
			cout << "error" << endl;
		}
		else {
			printf("%s", month[a - 1]);
			cout << endl;
		}
	}

	return 0;
}

