#include<iostream>
#include<malloc.h>
using namespace std;

int main(){
	int t,i,j,start[100]={0},end[100]={0};
	char str1[100]={0},str2[100]={0},str3[100]={0},*p;
	cin>>t;
	while(t--){
		getchar();
		cin>>str1>>str2>>str3;
			
		for(i=0;i<3;i++)
			cin>>start[i]>>end[i];
		int num=0;
		for(i=0;i<3;i++)
			num+=end[i]-start[i]+1;
			
		p=(char*)malloc(num*sizeof(char));
		
				
		int k,j=0,i=1;
		for(k=start[0]-1;k<end[0];k++,j++)
				p[j]=str1[k];
		for(k=start[1]-1;k<end[1];k++,j++)
				p[j]=str2[k];
		for(k=start[2]-1;k<end[2];k++,j++)
				p[j]=str3[k];		
		
		for(i=0;i<num;i++)
			cout<<p[i];
		cout<<endl;
	}
	return 0;
	 	
}
