#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    while (cin>>n)
        v.push_back(n);

    int sum = accumulate(begin(v),end(v),1,multiplies<int>());
    int sum2 = accumulate(begin(v),end(v),0,[](int re, int x)->int{return re+x*x;});
    std::cout<<sum<<endl;
    std::cout<<sum2<<endl;
}