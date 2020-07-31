#include <iostream>
#include <cstring>

using namespace std;

char *strAdd(char *s1, char *s2);

int main(void) {
	
	int t;
	
	cin >> t;
	while (t--) {
		char s1[32];
		char s2[32];
		
		cin >> s1;
		cin >> s2;
		
		cout << s1 << ' ' << s2 << ' ';
		cout << strAdd(s1, s2) << '\n';
	}
	
	return 0;
}

char *strAdd(char *s1, char *s2) {
	static char result[64];
	int i = strlen(s1);
	int j = 0;
	
	memset(result, 0, 64);
	strcpy(result, s1);
	while (s2[j] != '\0') {
		result[i] = s2[j];
		i++;
		j++;
	}
	
	return result;
}
