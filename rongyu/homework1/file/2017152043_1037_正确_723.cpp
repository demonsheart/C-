#include<iostream>
using namespace std;
int main(){
	  
	int t;
	cin >> t;
	while(t--){
  
		char type;
		int n;
		cin >> type >> n;
		  
		if(type == 'I'){
			  
			int sum = 0,average;
			int *a = new int[n];
			  
			for(int i = 0; i < n; i++){
				cin >> *(a + i);
				sum += *(a + i);
			}
			average = sum / n;
			cout << average << endl;
		  	delete []a;
		}
		else if(type == 'C'){
			  
			char max;
			char *b = new char[n];
			  
			for(int i = 0; i < n; i++){
				cin >> *(b + i);
			}
			  
			max = *b;
			  
			for(int i = 1; i < n; i++){
				if(b[i] >= max)
					max = *(b + i);
			}
			  
			cout << max << endl;
			delete []b;  
		}
		else if(type == 'F'){
			  
			float min;
			float *c = new float[n];
			  
			for(int i = 0; i < n; i++){
				cin >> *(c + i);
			}
			  
			min = *c;
			  
			for(int i = 1; i < n; i++){
				if(c[i] <= min)
					min = *(c + i);
			}
			  
			cout << min << endl;
			delete []c;
		}
	}   
	return 0;
}
