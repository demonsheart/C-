#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,pos;
    string sentence, st1, st2;

    cin>>t;
    getchar();
    while (t--)
    {
        getline(cin,sentence);
        cin>>st1>>st2;

        pos = sentence.find(st1);
        while (pos!=-1)
        {
            sentence.replace(pos,st1.length(),st2);
            pos = sentence.find(st1);
        }
        
        cout<<sentence<<endl;
    }
    return 0;
}