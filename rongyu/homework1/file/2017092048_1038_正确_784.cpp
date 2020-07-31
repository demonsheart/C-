// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 
#include <iostream>
#define MAX 100
using namespace std;

void trim(char *s, char *p, int a, int b, int len) {
	// s: trim string
	// p: trim and add to p 
	int loop = b - a + 1;
	for (int i = 0; i < loop; i++, len++) {
		*(p + len) = *(s + a - 1 + i);
	}
}

int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		char s1[MAX];
		char s2[MAX];
		char s3[MAX];
		char s4[MAX];
		char *p1, *p2, *p3, *p4;
		p1 = s1, p2 = s2, p3 = s3, p4 = s4;
		cin >> s1 >> s2 >> s3; \

			int a, b, len;
		len = 0;
		// 1
		cin >> a >> b;
		trim(s1, p4, a, b, len);
		len = len + b - a + 1;
		//2
		cin >> a >> b;
		trim(s2, p4, a, b, len);
		len = len + b - a + 1;
		//3
		cin >> a >> b;
		trim(s3, p4, a, b, len);
		len = len + b - a + 1;
		*(p4 + len) = '\0';
		cout << s4 << endl;
	}

	return 0;
}

