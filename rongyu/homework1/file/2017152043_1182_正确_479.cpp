#include<iostream>
#include<cstring>
using namespace std;

char *strAdd(char *s1, char *s2){
	
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2 + 1;
	char *combine = new char[len];
	int i;
	
	for(i = 0; i < len1; i++){
		combine[i] = s1[i];
	}
	
	for(int j = 0;i < len,j < len2; i++,j++){
		combine[i] = s2[j];
	}
	
	combine[len] = '\0';
	
	return combine;
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		char arr1[100],arr2[100];
		char *s1 = arr1, *s2 = arr2;
		cin >> arr1 >> arr2;
		cout << arr1 << " " << arr2 << " " << strAdd(s1,s2) << endl;	
	}
	return 0;
}
