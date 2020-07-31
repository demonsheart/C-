#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    ifstream in("aaa.txt");
    vector<int> s;
    for(int a; in>>a; )
     s.push_back(a);
    int pair = 0;
    for(int i=0; i<s.size()-1; ++i)
    for(int j=i+1; j<s.size(); ++j)
     if(s[i]==s[j]) pair++;
    cout<<pair<<endl;
}