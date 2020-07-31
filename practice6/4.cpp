#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class CHealth
{
    string name;
    float height;
    float weight;
    float waist;
public:
    int BMI();
    double rate();
    CHealth(string n, float a, float b, float c);
    void print();
};
int CHealth::BMI()
{
	int b;
	b = int(weight/(height*height)+0.5);
	return b;
}
double CHealth::rate()
{
    double a,b;
    a=waist*0.74;
    b=weight*0.082+34.89;
    return (a-b)/weight;
}
 CHealth::CHealth(string n, float a, float b, float c)
    {
        name = n;
        height = a;
        weight = b;
        waist = c;
    }

void CHealth::print()
{
    cout<<name<<"的BMI指数为"<<BMI()<<"--体脂率为"<<fixed<<setprecision(2)<<rate()<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        string a;
        float b,c,d;
        cin>>a>>b>>c>>d;
        CHealth h(a,b,c,d);
        h.print();
    }
    return 0;
}