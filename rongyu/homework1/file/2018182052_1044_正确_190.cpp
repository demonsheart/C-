#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;main(){
    int T=0;
    cin>>T;
    char s1[1000];
    char s2[1000];
    while(T--){
    	int m=0,n=0;
    	cin>>m>>n;
    	int **p=new int*[m];
    	for(int i=0;i<m;i++){
    		p[i]=new int[n];
    	}
    	int max=0,min=0;
    	for(int i=0;i<m;++i)
    		for(int j=0;j<n;++j)
    			cin>>p[i][j];
    	max=min=p[0][0];
    	for(int i=0;i<m;++i)
    		for(int j=0;j<n;++j){
    			if(p[i][j]>max)max=p[i][j];
    			if(p[i][j]<min)min=p[i][j];
    		}
    	for(int i=0;i<m;i++){
    		delete [] p[i];
    	}
    	delete []p;
    	cout<<min<<" "<<max<<endl;
    }
    return 0;
}
