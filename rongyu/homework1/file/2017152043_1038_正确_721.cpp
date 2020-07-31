#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		 
		int a1,a2,b1,b2,c1,c2;
		char a[12],b[12],c[12];
		int len;
		 
		cin >> a >> b >> c;
		cin >> a1 >> a2;
		cin >> b1 >> b2;
		cin >> c1 >> c2;
		 
		len = a2 - a1 + b2 - b1 + c2 - c1 + 3;
		 
		char *arr = new char[len + 1];
		char *ap = a,*bp = b,*cp = c;
		int j;
		for(int i = a1 - 1,j = 0; i < a2, j < (a2 - a1 +1); i++,j++){
			*(arr + j) = *(ap + i);
		}
		 
		for(int i = b1 - 1,j = (a2 - a1 + 1); i < b2, j < (a2 + b2 - a1 - b1 +2); i++,j++){
			*(arr + j) = *(bp + i);
		}
		 
		for(int i = c1 - 1,j = a2 + b2 - a1 - b1 +2; i < c2, j < len; i++,j++){
			*(arr + j) = *(cp + i);
		}
		 
		*(arr + len) = '\0';
		 
		for(int i = 0; i < len; i++){
			cout << *(arr + i);
		}
		cout << endl;
		
		delete []arr;
	}
	return 0;
}
