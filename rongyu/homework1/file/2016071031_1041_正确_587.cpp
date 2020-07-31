#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
using namespace std;


int main(int argc, char** argv) {
	int t, n;
		
	const char *month[13] = {"January ", "February", "March", "April", "May", "June", 
			"July", "August", "September", "October", "November", "December",};
	cin>>t;
	
	while(t--){
		scanf("%d", &n);
		if(n >= 1 && n <= 12){
			cout<<month[n-1]<<endl;
		}else{
			cout<<"error"<<endl;
		}
	}
	
	
	
	
	
	return 0;
}

