#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		 
		int n,m;
		int **num;
		int max = -2147483648;
		int min = 2147483647;
		cin >> m >> n;
		 
		num = new int*[m];
		for(int i = 0; i < m; i++)
			num[i] = new int[n];
		 
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				 
				cin >> num[i][j];
			  
				if(num[i][j] > max)
					max = num[i][j];
				else if(num[i][j] < min)
					min = num[i][j];
			}
		}
 		 
		cout << min << " " << max << endl;
		 
		for(int i = 0;i < m; i++)
			delete []num[i];
		delete []num;
		 
	}   
	return 0;
}
