#include<iostream>
#include<string.h>
//#include<algorithm>
using namespace std;
void isCompare(char *S, char *T);
int main(){
	int t;
	char str1[100],str2[100],*p,*q;
	cin>>t;
	while(t--){
		cin>>str1>>str2;
		p=str1,q=str2;
		isCompare(p,q);
	}
	return 0;
}

void isCompare(char *S, char *T){
	int lon1,lon2,i,flag1,flag2;
	
	lon1=strlen(S);
	lon2=strlen(T);
	
	if(lon1>lon2)
		cout<<1<<endl;
	else if(lon1<lon2)
		cout<<-1<<endl;
	else if(lon1==lon2){
	//	sort(S,S+lon1);
	//	sort(T,T+lon2);
		flag1=0,flag2=0;
		for(i=0;i<lon1;i++){
			if(S[i]>T[i])
				flag1++;
			else if(S[i]<T[i])
				flag2++;
		}
		if(flag1>flag2)
			cout<<1<<endl;
		else if(flag2==flag2)
			cout<<0<<endl;
		else if(flag2<flag2)
			cout<<-1<<endl;
	}
}
