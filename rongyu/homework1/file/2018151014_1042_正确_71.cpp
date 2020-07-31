#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int compare(char *S, char *T);

int main(void) {
	
	int t;
	
	cin >> t;
	while (t--) {
		char S[64];
		char T[64];
		
		cin >> S;
		cin >> T;
		
		cout << compare(S, T) << '\n';
	}
	
	return 0;
}

int compare(char *S, char *T) {
	if (strlen(S) < strlen(T)) {
		return -1;
	}
	else if (strlen(S) > strlen(T)) {
		return 1;
	}
	else {
		int sum = 0;
		for (int i = 0; S[i] != '\0'; i++) {
			sum += (S[i] - T[i]) / abs(S[i] - T[i]);
		}
		
		if (sum < 0) {
			return -1;
		}
		else if (sum == 0) {
			return 0;
		}
		else if (sum > 0) {
			return 1;
		}
	}
}
