#include <iostream>
#define PTR(m, i, j) (*((ptr) + (m)*(i) + (j)))

using namespace std;

int main(void) {
	
	int t;
	cin >> t;
	while (t--) {
		int *ptr = NULL;
		int m, n;
		
		cin >> m >> n;
		ptr = new int[m*n];
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> PTR(n, i, j);
			}
		}
		
		int max, min;
		max = min = PTR(m, 0, 0);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (max < PTR(n, i, j)) {
					max = PTR(n, i, j);
				}
				if (min > PTR(n, i, j)) {
					min = PTR(n, i, j);
				}
			}
		}
		
		cout << min << ' ' << max << '\n';
	}
	
	return 0;
}
