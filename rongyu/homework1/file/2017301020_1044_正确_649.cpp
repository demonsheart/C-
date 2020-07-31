#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t,m,n,max,min,**num;
    cin>>t;
    while(t--){
    	cin>>m>>n;
    	max=-9745646,min=1212121;
    	num=new int*[m];
    	for(int i=0;i<m;i++){
    		num[i]=new int[n];
		}
    	for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
    			cin>>num[i][j];
    			if(max<num[i][j]){
    				max=num[i][j];
				}
				if(min>num[i][j]){
					min=num[i][j];
				}
			}
		}
        for(int i=0;i<m;i++){
			delete []num[i];
		}
		delete []num;
		cout<<min<<" "<<max<<endl;
		
    }
    
    return 0;
}

