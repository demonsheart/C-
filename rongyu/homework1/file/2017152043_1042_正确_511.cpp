#include<iostream>
#include<cstring>
using namespace std;

int Compare(char *S,char *T){
	
	int len1 = strlen(S);
	int len2 = strlen(T);
	int bigger = 0, smaller = 0;
	
	if(len1 > len2)
		return 1;
	else if(len1 < len2)
		return -1;
	else if(len1 == len2){
		for(int i = 0;i < len1; i++){
			
			if(S[i] > T[i])
				bigger++;
			else if(S[i] < T[i])
				smaller++;
			
		}
		
		if(bigger > smaller)
			return 1;
		else if(bigger < smaller)
			return -1;
		else 
			return 0;
	}
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		char s[100],k[100];
		char *S = s, *T = k;
		
		cin >> s >> k;
		
		cout << Compare(S,T) << endl;
		
	}
	
	return 0;
}
