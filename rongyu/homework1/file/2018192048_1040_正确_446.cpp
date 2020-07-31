#include<string.h>
#include<iostream>
using namespace std;
void isNumber(char str[]);

int main(){
	int t;
	char str[100];
	cin>>t;
	while(t--){
		getchar();
		cin>>str;
		isNumber(str);
	}
	return 0;
}

void isNumber(char str[]){
	int lon,i,sum=0;
	lon=strlen(str);
	for(i=0;i<lon;i++){
		if(str[i]>57||str[i]<48){
			cout<<-1<<endl;
			return ;
		}
			
		else if(str[i]>='0'&&str[i]<='9')
			sum=sum*10+str[i]-'0';
	}
	
	cout<<sum<<endl;
	return ;
}
