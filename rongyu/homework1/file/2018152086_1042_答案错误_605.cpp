#include<iostream>

using namespace std;

int compare(char* s,char*t){
	int i,j,sum1=0,sum2=0;
	for(i=0;i<10;i++){
		if(*(s+i)!='\0'&&*(t+i)!='\0'){
			if(*(s+i)>*(t+i)){
				sum1++;
			}
			else if(*(s+i)<*(t+i)){
				sum2++;
			}
		}
		else if(*(s+i)=='\0'&&*(t+i)=='\0'){
			break;
		}
		else if(*(s+i)=='\0'&&*(t+i)!='\0'){
			return -1;
		}
	}
//	printf("%d %d\n",sum1,sum2);
	if(sum1==sum2){
		return 0;
	}
	else if(sum1<sum2){
		return -1;
	}
	else if(sum1>sum2) 
	return 1;
}

int main(){
	int t,flag;
	cin>>t;
	while(t--){
		char *s=new char [100];
		char *t=new char [100];
		cin>>s;
		cin>>t;
		flag=compare(s,t);
		cout<<flag<<endl;
	}
	return 0;
}

