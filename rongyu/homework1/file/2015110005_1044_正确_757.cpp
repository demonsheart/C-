#include<iostream>
using namespace std;

int main(){
	int i, j, t, m, n, ** array, min, max;
	cin >> t;
	while(t--){
		cin >> m >> n;
		min = 9999;
		max = -9999;
		array = new int*[m];
		for(i = 0; i < m; i++){
			array[i] = new int[n];
			for(j = 0; j < n; j++){
				cin >> array[i][j];
				if(array[i][j] > max) max = array[i][j];
				if(array[i][j] < min) min = array[i][j];
			}
		}
		cout << min << " " << max << endl;
	}
	return 0;
}
