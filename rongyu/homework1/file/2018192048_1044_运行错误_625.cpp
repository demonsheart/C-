#include<iostream>
using namespace std;

int main(){
	int t,i,j,m,n;
	int	**p;
	p=new int*[1000];
	for(i=0;i<=1000;i++)
		p[i]=new int[1000];
	
	cin>>t;
	while(t--){
		cin>>m>>n;
		int max=0,min=9999;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>p[i][j];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++){
				if(max<p[i][j])
					max=p[i][j];
				if(min>p[i][j])
					min=p[i][j];				
			}
		
			cout<<min<<' '<<max<<endl;	
	}
	return 0;
}

