#include <iostream>
#include<string>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
    int t;
    char *s1, *s2;
    s1 = new char[20];
    s2 = new char[20];
    cin>>t;
    while(t-- > 0){
        cin>>s1;
        cin>>s2;
        cout<<s1<<" "<<s2<<" "<<strAdd(s1,s2)<<endl;
    }
    delete s1, s2;
	return 0;
}

char *strAdd(char *s1, char *s2){
    char *s;
    s = new char[50];
    int j=0;
    for(int i=0; *(s1+i) != '\0'; i++, j++)
        *(s+j) = *(s1+i);
    for(int i=0; *(s2+i) != '\0'; i++, j++)
        *(s+j) = *(s2+i);

    return s;
}

