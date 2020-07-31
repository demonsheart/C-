#include <iostream>
#include<string>
using namespace std;
int strComp(char *s1, char *s2);
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
        cout<<strComp(s1,s2)<<endl;
    }
    delete s1, s2;
	return 0;
}

int strComp(char *s1, char *s2){
    int len1=0, len2=0, a=0, b=0;
    for(int i=0; *(s1+i)!='\0'; i++, len1++){}
    for(int i=0; *(s2+i)!='\0'; i++, len2++){}

    if(len1 > len2)
        return 1;
    else if(len1 < len2)
        return -1;
    else{
        for(int i=0; i < len1 ; i++){
            if(*(s1+i) > *(s2+i))
                a++;
            else if(*(s1+i) < *(s2+i))
                b++;
        }
        if(a > b)
            return 1;
        else if(a < b)
            return -1;
        else
            return 0;
    }
}

