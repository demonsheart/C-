#include <iostream>
#include <cstring>
using namespace std;

char *strAdd(char *s1, char *s2){
    static char s3[500];
    strcpy(s3,s1);
    strcat(s3,s2);
    return s3;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore(100,'\n');
    while(t--){
        char s1[250],s2[250];
        cin.getline(s1,250).getline(s2,250);
        cout<<s1<<' '<<s2<<' '<<strAdd(s1,s2)<<endl;
    }
    return 0;
}

