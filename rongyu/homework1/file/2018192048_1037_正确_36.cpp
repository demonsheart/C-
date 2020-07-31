#include<iostream>
using namespace std;

int main(){
	int t,n,i;
	char ch;
	
	cin>>t;
	while(t--){
		cin>>ch>>n;
		
		char *p,a[100]={0},max;
		if(ch=='C'){
			for(i=0;i<n;i++)
				cin>>a[i];
				
			p=a;
			max=p[0];
			for(i=1;i<n;i++)
				if(max<p[i])
					max=p[i];
					
			cout<<max<<endl;
		}
		
		int *q,b[100]={0},average,sum;
		if(ch=='I'){
			for(i=0;i<n;i++)
				cin>>b[i];
			
			q=b;
			sum=0;
			for(i=0;i<n;i++)
				sum+=q[i];
			average=sum/n;			
			cout<<average<<endl;
		}
		
		float *o,c[100]={0},min;
		if(ch=='F'){
			for(i=0;i<n;i++)
				cin>>c[i];
			
			o=c;
			min=o[0];
			for(i=1;i<n;i++)
				if(min>o[i])
					min=o[i];			
			cout<<min<<endl;
		}

	}
	
	return 0;
}
