// OOP.cpp: 定义控制台应用程序的入口点。
// Mar.11, 2019
// Author: Dong Wenzhuo
// 
#include <iostream>

#define MAX 100

using namespace std;

int main() {
	int samples = 0;
	cin >> samples;
	while (samples--) {
		int m, n, i, j;
		cin >> m >> n;

		// allocate space
		int **a = new int *[m];
		for (i = 0; i < m; i++) {
			a[i] = new int[n];
		}
		// input matrix
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		// find max and min;
		int max, min;
		max = min = a[0][0];
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				if (a[i][j] > max)
					max = a[i][j];
				if (a[i][j] < min)
					min = a[i][j];
			}
		}

		cout << min << " " << max << endl;
	}

	return 0;
}

