#include<iostream>

using namespace std;

char *strAdd(char s1[], const char s2[])  

{  
	char *s3=new char [200];

    int i,j;  

    
    for(i=0; s1[i]!='\0'; i++){
  
    	s3[i]=s1[i];
	}

    for(j=0; s2[j]!='\0'; i++,j++) {  

        s3[i]=s2[j];  

    }  

    s3[i]='\0';   

    return s3;  

}  /*(char *s1, char *s2){
	char *strAdd=new char [200];
	int i=0,j=0; 
	for(i=0;*(s1+i)!='\0';i++){
		*(strAdd+i)=*(s1+i);
	}
	for(j=0;*(s2+j)!='\0';i++,j++){
		*(strAdd+i)=*(s2+i);
	} 
	*(strAdd+i)='\0';
	return strAdd; 
	}*/

int main(){
	int t;
	cin>>t;
	while(t--){
		char *s1=new char [100];
		char *s2=new char [100];
		char *s3;
		cin>>s1;
		cin>>s2;
		s3=strAdd(s1,s2);
		cout<<s1<<" "<<s2<<" "<<s3<<endl;
	}
	return 0;
}
