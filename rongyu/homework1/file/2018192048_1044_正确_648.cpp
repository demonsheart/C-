#include<iostream>
using namespace std;

int main(){
	int t,i,j,m,n;
	
	cin>>t;
	while(t--){
		cin>>m>>n;
		int	**p;
		p=new int*[m];
		for(i=0;i<m;i++)
			p[i]=new int[n];
		int _max=0,_min=9999;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>p[i][j];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++){
				if(_max<p[i][j])
					_max=p[i][j];
				if(_min>p[i][j])
					_min=p[i][j];				
			}
		
		cout<<_min<<' '<<_max<<endl;	
		
		
	}
	return 0;
}

