#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string str,st;

    // cin>>str;

    // cout << str << endl;

    auto list = {4,5,6};
    for(auto x : list)
     cout<<x<<" ";
    
    auto list1 = {"aaa", "bbb", "ccc"};
    for(string r : list1)
     cout<<r<<" ";
    string st1, st2("yfusdhfsd");
    for(auto it = st2.begin(); it!=st2.end(); it++)
     cout<<*it<<" ";
    cout<<endl;
    st1.assign(st2);
    cout<<"st1: "<< st1<<endl;
    st1.assign(st2,1,2);
    cout<<"st1: "<< st1<<endl;
    st1 +=("demon");
    cout<<"st1: "<< st1<<endl;
    // char c = st1[0];
    // cout<<"c: "<<c<<endl;
    // string st = st1.substr(4,5);
    // cout<<"st: "<< st<<endl;
    // cout<<st1.find(st,0)<<endl;
    // cout<<st1.find_last_of('f',0)<<endl;
    // string dd;
    // cin>>dd;
    // char w = dd[0]; //检查是数字还是find
    // if (w >= '0' && w <= '9')
    // cout<<w-'0'<<endl;
    // else
    // {
    //     cout<<dd<<endl;
    // }
}