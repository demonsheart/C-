// OOP.cpp: 定义控制台应用程序的入口点。
// Author: Dong Wenzhuo
// 
#include <iostream>

using namespace std;

int average(int *num, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(num + i);
	}
	return sum / n;
};


int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		char command;
		int n;
		cin >> command >> n;

		int i, index;
		// process
		if (command == 'I') {
			int *num = new int[n];
			for (i = 0; i < n; i++) {
				cin >> *(num + i);
			}
			cout << average(num, n) << endl;
		}
		else if (command == 'C'){
			char *cha = new char[n];
			for (i = 0; i < n; i++) {
				cin >> *(cha + i);
			}
			index = 0;
			for (i = 1; i < n; i++) {
				if (*(cha + i) > *(cha + index)) {
					index = i;
				}
			}
			cout << *(cha + index) << endl;
		}
		else {
			float *flo = new float[n];
			for (i = 0; i < n; i++) {
				cin >> *(flo + i);
			}
			index = 0;
			for (i = 1; i < n; i++) {
				if (*(flo + i) < *(flo + index)) {
					index = i;
				}
			}
			cout << *(flo + index) << endl;
		}
		
	}

	return 0;
}

