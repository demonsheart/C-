#include<iostream>
using namespace std;

void integer(int n){
	int* array = new int[n];
	int i, sum = 0;
	for(i = 0; i < n; i++){
		cin >> *(array + i);
		sum += *(array + i);
	} 
	cout << sum / n << endl;
}

void character(int n){
	char max = '\0', *array = new char[n];
	int i;
	for(i = 0; i < n; i++){
		cin >> *(array + i);
		if(*(array + i) > max) max = *(array + i);
	}
	cout << max << endl;
}

void _float(int n){
	float *array = new float[n], min = 9999.0;
	int i;
	for(i = 0; i < n; i++){
		cin >> *(array + i);
		if(min > *(array + i)) min = *(array + i);
	}
	cout << min << endl;
}
int main(){
	int t, n;
	char type;
	cin >> t;
	while(t--){
		cin >> type;
		cin >> n;
		switch(type){
			case 'I': integer(n); break;
			case 'C': character(n); break;
			case 'F': _float(n); break;
		}

	}
	return 0;
}
