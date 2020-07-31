#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string device(string s)
{
    auto it = s.begin();
    for (; !(*it >= '0' && *it <= '9'); ++it)
        ;
    string re(s.begin(), it);
    return re;
}
int main()
{
    /*½«ËÞÉáÂ¥ÓëºÅÂë·ÖÀë*/

    string tmp1("ºì¶¹Õ«C1101"), tmp2("´ºµÑB201");
    //auto it1 = tmp1.begin(), it2 = tmp2.begin();
    // for (; !(*it1 >= '0' && *it1 <= '9'); ++it1)
    //     ;
    // for (; !(*it2 >= '0' && *it2 <= '9'); ++it2)
    //     ;
    // string st1(tmp1.begin(), it1), st2(tmp2.begin(), it2), no1(it1, tmp1.end()), no2(it2, tmp2.end());
    // int n1 = stoi(no1), n2 = stoi(no2);
    // cout << st1 << " " << st2 << " " << no1 << " " << no2 << " " << n1 << " " << n2 << endl;
    string re1 = device(tmp1);
    string re2 = device(tmp2);
    cout << re1 << " " << re2 << endl;
}