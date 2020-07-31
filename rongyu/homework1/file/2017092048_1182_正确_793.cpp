// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 
#include <iostream>
#include <stdio.h>
#define MAX 100

using namespace std;

char *strAdd(char *s1, char *s2) {
	static char p[2*MAX];
	int i, index;
	index = 0;

	for (i = 0; *(s1 + i) != '\0'; i++, index++) {
		*(p + index) = *(s1 + i);
	}

	*(p + index) = ' ';
	index++;

	for (i = 0; *(s2 + i) != '\0'; i++, index++) {
		*(p + index) = *(s2 + i);
	};

	*(p + index) = ' ';
	index++;

	for (i = 0; *(s1 + i) != '\0'; i++, index++) {
		*(p + index) = *(s1 + i);
	}
	for (i = 0; *(s2 + i) != '\0'; i++, index++) {
		*(p + index) = *(s2 + i);
	}
	p[index] = '\0';
	return p;

}

int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		char s1[MAX];
		char s2[MAX];
		cin >> s1 >> s2;
		char *p = strAdd(s1, s2);
		printf("%s", p);
		cout << endl;
	}

	return 0;
}

