// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 
#include <iostream>

#define MAX 100

using namespace std;

int strlen(char *p) {
	int len = 0;
	for (int i = 0; *(p + i) != '\0'; i++) {
		len++;
	}
	return len;
}

int compare(char *s, char *t) {
	int len_s = strlen(s);
	int len_t = strlen(t);
	if (len_s > len_t) {
		return 1;
	}
	else if (len_s < len_t) {
		return -1;
	}
	else {
		int count_a, count_b;
		count_a = count_b = 0;
		for (int i = 0; i < len_s; i++) {
			if (*(s + i) > *(t + i)) {
				count_a++;
			}
			else if (*(s + i) < *(t + i)) {
				count_b++;
			}
			else {
				continue;
			}
		}
		if (count_a > count_b) {
			return 1;
		}
		else if (count_a < count_b) {
			return -1;
		}
		else {
			return 0;
		}
	}

}

int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		char s1[MAX];
		char s2[MAX];
		cin >> s1 >> s2;
		cout << compare(s1, s2) << endl;
	}

	return 0;
}

