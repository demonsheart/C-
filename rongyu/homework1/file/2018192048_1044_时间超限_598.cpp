#include<iostream>
void juzhen(int **p,int m,int n);
using namespace std;

int main(){
	int t,i,j,m,n;
	int	**p;
	p=new int*[1000];
	for(i=0;i<1000;i++)
		p[i]=new int[100];
	
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>p[i][j];
		
		juzhen(p,m,n);
	}
	return 0;
}
void juzhen(int **p,int m,int n){
	int i,j,min,max;
	
	min=p[0][0],max=p[0][0];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max<p[i][j])
				max=p[i][j];
			if(min>p[i][j])
				min=p[i][j];
		}			
	}
	
	cout<<min<<' '<<max<<endl;
					
}

