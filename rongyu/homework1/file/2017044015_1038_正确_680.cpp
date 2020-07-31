#include <iostream>
#include<string>
using namespace std;

char* sub(char *s, int a, int b);
int main()
{
	int t, p, q, len;
	char *a, *b, *c, *r;
	cin>>t;
	while(t--> 0){
        a = new char[10];
        b = new char[10];
        c = new char[10];
        r = new char[30];

        cin>>a>>b>>c;

        int j=0;
        cin>>p>>q;
        for(int i=0; i<q-p+1; i++,j++)
            *(r+j) = *(sub(a,p,q)+i);
        cin>>p>>q;
        for(int i=0; i<q-p+1; i++,j++)
            *(r+j) = *(sub(b,p,q)+i);
        cin>>p>>q;
        for(int i=0; i<q-p+1; i++,j++)
            *(r+j) = *(sub(c,p,q)+i);

        cout<<r<<endl;
	}
	return 0;
}

char* sub(char *s, int a, int b){
    char* st;
    st = new char[10];
    for(int i=0; i<b-a+1; i++){
        *(st+i) = *(s+a+i-1);
    }
    return st;
}

