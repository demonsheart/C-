#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	const char *month[13] = {NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	while(t--){
		
		int mon;
		cin >> mon;
		
		if(mon < 1 || mon > 12)
			cout << "error";
		else
		    cout << month[mon] << endl;
		
	}
	
	return 0;
}

