#include<iostream>
using namespace std;
class test
{
private:
    int value;
public:
    test()
    {
        value = 0;
        cout<<"Constructed by default, value = "<<value<<endl;
    }
    test(int a)
    {
        value = a;
        cout<<"Constructed using one argument constructor, value = "<<value<<endl;
    }
    test(test &t)
    {
        this->value = t.value;
        cout<<"Constructed using copy constructor, value = "<<this->value<<endl;
    }
};


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n;
        if(n==0)
        {
            test s;
        }
        else if(n==1)
        {
            cin>>a;
            test s1(a);
        }
        else if(n==2)
        {
            cin>>a;
            test s2(a);
            test s3(s2);
        } 
    }
    return 0;
}