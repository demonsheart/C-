#include <iostream>
#include <cstring>
using namespace std;

int compare(char *S,char *T){
    int max=0,min=0,length1,length2;
    char *p1=S,*p2=T;
    length1=strlen(S);
    length2=strlen(T);
    if(length1>length2){
    	return 1;
	}
	else if(length1<length2){
		return -1;
	}
	else{
    	while(length1--){
    		if((*p1-*p2)>0){
    			max++;
			}
			else if((*p1-*p2)<0){
				min++;
			}
			p1++;p2++;
		}
		if(max>min){
			return 1;
		}
		else if(max==min){
			return 0;
		}
		else{
			return -1;
		}
	}
}

int main(){
    int t;
    char s1[100],s2[100];
    cin>>t;
    while(t--){
        cin>>s1;
        cin>>s2;
        cout<<compare(s1,s2)<<endl;
    }
    return 0;
}

