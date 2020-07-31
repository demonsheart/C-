#include<iostream>
#include<cstdio>

using namespace std;

int isNumber(char * str);

int main() {
    char s[100];
    int t;
   // FILE * file;

    cin>>t;
    cin.ignore(10,'\n');
    while(t--) {
        cin.getline(s,sizeof(s),'\n');
        //printf("%d\n",isNumber(s));
        cout<<isNumber(s)<<endl;
    }


    return 0;
}

int isNumber(char * str) {
    int n = 0;
    int i = 0;

    while(str[i]) {
        if(str[i] >= '0' && str[i] <= '9') {
            n = n*10 + str[i] - '0';
        } else {
            return -1;
        }
        i++;
    }

    return n;

}

