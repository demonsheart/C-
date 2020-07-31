#include <iostream>

using namespace std;

int main(void) {
	
	int t;
	cin >> t;
	while (t--) {
		int **ptr = NULL;
		int m, n;
		
		cin >> m >> n;
		ptr = new int *[n];
		for (int i = 0; i < n; i++) {
			ptr[i] = new int[m];
		}
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> ptr[i][j];
			}
		}
		
		int max, min;
		max = ptr[0][0];
		min = ptr[0][0];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (max < ptr[i][j]) {
					max = ptr[i][j];
				}
				if (min > ptr[i][j]) {
					min = ptr[i][j];
				}
			}
		}
		
		cout << min << ' ' << max << '\n';
	}
	
	return 0;
}
