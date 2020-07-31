#include<iostream>
using namespace std;

int main(){
	int t,i,j,m,n;
	int	**p;
	cin>>t;
	while(t--){
		cin>>m>>n;
		p=new int*[m];
		for(i=0;i<m;i++)
			p[i]=new int[n];
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
		delete []p;
	}
	return 0;
}

