#include<iostream>
using namespace std;

int main(){
	int i, j, t, begin[3], end[3], len = 0;
	char str[3][10], *str4;
	cin >> t;
	while(t--){
		for(i = 0; i < 3; i++) cin >> str[i];
		for(i = 0; i < 3; i++){
			cin >> begin[i] >> end[i];
			len += end[i] - begin[i] + 1;
		}
		str4 = new char[len + 1];
		len = 0;
		for(i = 0; i < 3; i++){
			for(j = 0; j <= end[i] - begin[i]; j++)
				*(str4 + len + j) = *(*(str + i) + begin[i] + j - 1);
			len += end[i] - begin[i] + 1;
		}
		str4[len] = '\0';
		cout << str4 << endl;
	}
	return 0;
}
