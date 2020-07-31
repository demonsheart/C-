#include<iostream>
using namespace std;
#include<fstream>

int main(){
	//ifstream cin("C:\\dev\\dev.txt");
	int t;
	cin>>t;
	int sum=0;
	while(t--){
		char c;
		int n;
		cin>>c>>n;
		if(c=='I'){
			int *array1=new int[n];
			for(int i=0;i<n;i++)
			cin>>*(array1+i);
			for(int i=0;i<n;i++){
			sum=sum+*(array1+i);
			//array1++;
		}
		cout<<sum/n<<endl;
		}
		if(c=='C'){
			char *array2=new char[n];
			for(int i=0;i<n;i++)
			cin>>*(array2+i);
			char temp;
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++)
				if(*(array2+j)<*(array2+j+1)){
					temp=*(array2+j);
					*(array2+j)=*(array2+j+1);
					*(array2+j+1)=temp;
				}
			}
			cout<<*(array2)<<endl;
		}
		if(c=='F'){
			double *array3=new double [n];
			double temp;
			for(int i=0;i<n;i++)
			cin>>*(array3+i);
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-1-i;j++)
				if(*(array3+j)>*(array3+j+1)){
					temp=*(array3+j);
					*(array3+j)=*(array3+j+1);
					*(array3+j+1)=temp;
				}
			}
			cout<<*(array3)<<endl;
		}
		
	}
	return 0;
}
