#include <iostream>

using namespace std;

typedef char char_10[11];

int main(void) {
	
	int t;
	
	cin >> t;
	while (t--) {
		
		char_10 *str = new char_10[3];
		int a[3] = {0}, b[3] = {0};
		
		for (int i = 0; i < 3; i++) {
			cin >> *(str+i);
		}
		for (int i = 0; i < 3; i++) {
			cin >> *(a+i);
			cin >> *(b+i);
		}
		
		for (int i = 0; i < 3; i++) {
			for (int j = a[i]-1; j < b[i]; j++) {
				cout << *(*(str+i)+j);
			}
		}
		cout << '\n';
		
	}
	
	return 0;
} 
