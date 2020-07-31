#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int com(char sa[],char sb[]){
	int n1=strlen(sa);
	int n2=strlen(sb);
	if(n1>n2)return 1;
	else if(n2>n1)return -1;
	int cnt=0;
	for(int i=0;i<n1;++i){
		if(sa[i]>sb[i])++cnt;
		else if(sa[i]<sb[i])--cnt;
	}
	if(cnt>0)return 1;
	else if (cnt<0)return -1;
	else if (cnt==0)return 0;
}
int main(){
    int T=0;
    cin>>T;
    char s1[1000];
    char s2[1000];
    while(T--){
    	cin>>s1>>s2;
    	cout<<com(s1,s2)<<endl;
    }
    return 0;
}
