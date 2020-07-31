#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
  
int isNum(char *num){
	
	
	int len = strlen(num);  
	int flag = 0,shu = 0;
	for(int i = len - 1; i >= 0; i--){
		if(*(num + i) >= 48 && *(num + i) <= 57){
			shu += (*(num + i) - 48) * pow(10, len - i - 1);
		}
		else{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		return -1;
	else
		return shu;
	  
}
  
int main(){
	  
	int t;
	char arr[100];
	cin >> t;
	while(t--){
		  
		cin >> arr;
		char *num = arr;
		cout << isNum(num) << endl;
		  
	}
	return 0;
}
