#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
void Do(int m, int n){
	int **matrix = new int *[m], min, max;
	for(int i=0;i<m;i++){
		matrix[i] = new int[n];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}
	min = max = matrix[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(min > matrix[i][j]){
				min = matrix[i][j];
			}
			if(max < matrix[i][j]){
				max = matrix[i][j];
			}
		}
	}
	cout<<min<<" "<<max<<endl;
}
int main(){
	// freopen("D:\\Programming\\C++\\c++Files\\in.txt","r",stdin);
	int t;
	cin>>t;
	while(t --){
		int m, n;
		cin>>m>>n;
		Do(m, n);
	}
}
