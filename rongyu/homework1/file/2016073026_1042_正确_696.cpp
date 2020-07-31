#include <iostream>
#include <cstring>
using namespace std;

int stringcmp(char *s1, char *s2){
    int len1=strlen(s1),len2=strlen(s2);
    if(len1>len2)   return 1;
    else  if(len2 >len1)    return -1;
    else{
        int cnt1=0,cnt2=0;
        for(int i=0;i<len1;i++){
            if(*(s1+i) > *(s2+i))
                cnt1++;
            else if(*(s1+i) < *(s2+i))
                cnt2++;
        }
        if(cnt1>cnt2)
            return 1;
        else if(cnt1<cnt2)
            return -1;
        else
            return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    cin.ignore(100,'\n');
    while(t--){
        char s1[250],s2[250];
        cin.getline(s1,250).getline(s2,250);
        cout<<stringcmp(s1,s2)<<endl;
    }
    return 0;
}

