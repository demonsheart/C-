#include <iostream>
// #include <fstream>
using namespace std;
void CreateCharArray(int n){
	char *array = new char[n], max = 'A';
	for(int i=0;i<n;i++){
		cin>>*(array+i);
	}
	for(int i=0;i<n;i++){
		if(*(array+i) > max){
			max = *(array+i);
		}
	}
	cout<<max<<endl;
}
void CreateIntArray(int n){
	int *array = new int[n], sum = 0;
	for(int i=0;i<n;i++){
		cin>>*(array+i);
	}
	for(int i=0;i<n;i++){
		sum += *(array+i);
	}
	cout<<sum/n<<endl;
}
void CreateFloatArray(int n){
	float *array = new float[n], min = 0x3f3f3f3f;
	for(int i=0;i<n;i++){
		cin>>*(array+i);
	}
	for(int i=0;i<n;i++){
		if(*(array+i) <min){
			min = *(array+i);
		}
	}
	cout<<min<<endl;
}
int main(){
	// ifstream cin("D:\\Programming\\C++\\c++Files\\in.txt");
	int t;
	cin>>t;
	while(t --){
		char temp;
		int n;
		cin>>temp>>n;
		switch(temp){
			case 'C':
				CreateCharArray(n);
				break;
			case 'I':
				CreateIntArray(n);
				break;
			case 'F':
				CreateFloatArray(n);
				break;
		}
	}
}
