#include<iostream>
using namespace std;

int main(){
	int t, m;
	char* month[13] = {
		NULL,
		"January", 
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};
	cin >> t;
	while(t--){
		cin >> m;
		if(m > 12 || m < 1){
			cout << "error" << endl;
			break;
		}
		cout << month[m] << endl;
	}
	return 0;
}
