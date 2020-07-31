#include<iostream>
using namespace std;
int main() {
	int t,i,j;
	cin>>t;
	while(t--) {
		int n;
		char ch;
		cin>>ch>>n;
		switch(ch) {
			case 'I': {

				int *a=new int[n];
				int sum=0;
				for(i=0; i<n; i++) {
					cin>>*(a+i);
					sum=sum+*(a+i);
				}
				cout<<sum/n<<endl;
				break;
			}
			case 'C': {
				char *b=new char [n];
				char c='A';
				for(i=0; i<n; i++) {
					cin>>*(b+i);
					if(*(b+i)>c) {
						c=*(b+i);
					}
				}
				cout<<c<<endl;
				break;
			}
			case 'F': {

				float *c=new float [n];
				for(i=0; i<n; i++) {
					cin>>*(c+i);
					if(i!=0&&*(c+i)<*c) {
						*c=*(c+i);
					}
				}
				cout<<*c<<endl;
				break;
			}
		}
	}
	return 0;
}

