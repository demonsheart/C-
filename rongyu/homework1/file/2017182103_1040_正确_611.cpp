#include <iostream>


using namespace std;
int isNumber(string s){
    int sum = 0;
    for(int i=0;i<s.size();i++){
        int tep = (int)s[i];
        if(tep >= 48 && tep <= 57){
            sum = sum*10+s[i]-'0';
        }
        else{
            return -1;
        }
    }

    return sum;
}
int main()
{
    int time;
    cin>>time;
    for(int i=0;i<time;i++){
    string str;
    cin>>str;
    cout<<isNumber(str)<<endl;
    }
    return 0;
}

