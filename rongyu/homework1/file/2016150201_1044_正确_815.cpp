#include<iostream>
using namespace std;
int Max(int **a,int n,int m){
	int amax=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>amax)
			amax=a[i][j];
		}
		
	}
	return amax;
}
int Min(int **a,int n,int m){
	int amin=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]<amin)
			amin=a[i][j];
		}
		
	}
	return amin;
}

int main(){
	int n,m,t;
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>n>>m;
	int **a=new int* [n];
	for(int i=0;i<n;i++){
		a[i]=new int[m];
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<m;k++)
		cin>>a[j][k];
	}
	cout<<Min(a,n,m)<<" ";
	cout<<Max(a,n,m)<<endl;
	for(int i=0;i<n;i++)
	delete []a[i];
	a=NULL;}
	return 0;

	}
