#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;
class health
{
    char name[20];
    float height;
    float weight;
    float yao;

public:
    int BMI();
    double rate();
    void setname(char *n);
    void setheight(float a);
    void setweight(float a);
    void setyao(float a);
    void getresult();
};
int health::BMI()
{
    double a;
    int b;
    a = weight / pow(height, 2);
    b = int(a + 0.5);
    return b;
}
double health::rate()
{
    double a, b;
    a = yao * 0.74;
    b = weight * 0.082 + 34.89;
    return (a - b) / weight;
}
void health::setname(char *n) { strcpy(name, n); }
void health::setheight(float a) { height = a; }
void health::setweight(float a) { weight = a; }
void health::setyao(float a) { yao = a; }
void health::getresult()
{
    cout << name << "的BMI指数为" << BMI() << "--体脂率为" << fixed << setprecision(2) << rate() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[20];
        float b, c, d;
        cin >> a >> b >> c >> d;
        health n;
        n.setname(a);
        n.setheight(b);
        n.setweight(c);
        n.setyao(d);
        n.getresult();
    }
    system("pause");
    return 0;
}