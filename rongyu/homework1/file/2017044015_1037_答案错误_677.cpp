#include <iostream>
 
using namespace std;
 
int factorial(int n);
int combine(int m, int n);
int main()
{
    int t, m, n;
    cin>>t;
    while(t-- > 0){
        cin>>m>>n;
        cout<<combine(m,n)<<endl;
    }
    return 0;
}
 
int factorial(int n)
{
    int re = 1;
    for(int i=1; i <= n; i++)
        re = re * i;
    return re;
}
 
int combine(int m, int n){
    return factorial(m)/(factorial(n)*factorial(m-n));
}
