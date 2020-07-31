#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j;
		int m,n;
			cin>>m>>n;
		int **arr;
			arr=new int*[m];
		for(int i=0;i<m;i++)
			arr[i]=new int[n];
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>arr[i][j];
		int min = **arr;
		int max=**arr;
       for(i = 0; i < m; i++){
       for(j = 0; j <n; j++){       
       if(*(*(arr+i)+j) < min){
			min = *(*(arr+i)+j);
        }
       }
    }
		cout<<min<<" ";
		for(i = 0; i < m; i++){
       for(j = 0; j <n; j++){       
       if(*(*(arr+i)+j) > max){
			max = *(*(arr+i)+j);
        }
       }
    }
		cout<<max<<endl;		
	}
	return 0;
}
